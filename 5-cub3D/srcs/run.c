/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 08:48:56 by anradix           #+#    #+#             */
/*   Updated: 2020/01/20 20:13:55 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include <stdlib.h>


void	load_textures(main_strct *m_ptr)
{
	int h = 50;
	int w = 50;

	m_ptr->textures.wall_n = mlx_xpm_file_to_image(m_ptr->mlx.mlx_init, m_ptr->textures.path_wall_n, &h, &w);
}

int		key_press(int key, main_strct *m_ptr)
{
	if  (key == 53)
		exit (EXIT_SUCCESS);
	if (key == W)
		m_ptr->jj -= 25;
	if (key == A)
		m_ptr->ii -= 25;
	if (key == S)
		m_ptr->jj += 25;
	if (key == D)
		m_ptr->ii += 25;
	if (key == ARROW_R)
		printf("arrow_r\n");
	if (key == ARROW_L)
		printf("arrow_l\n");
/*	mlx_clear_window(m_ptr->mlx.mlx_init, m_ptr->mlx.win);
	mlx_put_image_to_window(m_ptr->mlx.mlx_init, m_ptr->mlx.win, m_ptr->textures.wall_n, m_ptr->ii, m_ptr->jj);*/
	return (1);
}

// 1 char 1 octect == 8 bits
// 1 pixel = 32 bits
// Donc 1 pixel = 4 char


void	char_to_bits(char c)
{
	char test[9];
	for( int i = 7; i >= 0; i-- ) {
		test[i] = (c >> i) & 1 ? 1 : 0;
		//sprintf( "%d", ( c >> i ) & 1 ? 1 : 0 );
	}
	printf("test = %s\n", test);
}

int		run(main_strct *m_ptr)
{
	m_ptr->ii= 0;
	m_ptr->jj = 0;
	if (!(m_ptr->mlx.mlx_init = mlx_init()))
		return (0);
	if (!(m_ptr->mlx.win = mlx_new_window(m_ptr->mlx.mlx_init, m_ptr->map.width, m_ptr->map.height, "Cub3d - anradix")))
		return (0);
	load_textures(m_ptr);

	// -- TEST MODIFY IMG -- //
	void *img;
	char *addr;
	int bits, size_line, endian;
	int color;
	int i = 0;

	img = mlx_new_image(m_ptr->mlx.mlx_init, m_ptr->map.width, m_ptr->map.height);
	addr = mlx_get_data_addr(img, &bits, &size_line, &endian);
	//color = (m_ptr->mlx.mlx_init, m_ptr->textures.wall_n);
	/*11111111
	10100101
	00000000*/
	while (i < size_line)
	{
		((unsigned char *)addr)[i] = 0;
		((unsigned char *)addr)[i + 1] = 255;
		((unsigned char *)addr)[i + 2] = 165;
		addr[i + 3] = 0;
		i += 4;
	}
	mlx_put_image_to_window(m_ptr->mlx.mlx_init, m_ptr->mlx.win, img, 10, 10);
	addr = NULL;
	addr = mlx_get_data_addr(m_ptr->textures.wall_n, &bits, &size_line, &endian);
	i = 0;
	char_to_bits(addr[0]);
	// get la color OK 
	// la transformer en binaire et la copier dans notre img 
	// ou copier directement les char;
/*	while (i < size_line)
	{
		char_to_bits(addr[0]);*/
	// --- //
	mlx_hook(m_ptr->mlx.win, 2, 0, key_press, m_ptr);
	mlx_loop(m_ptr->mlx.mlx_init);
	return (1);
}
