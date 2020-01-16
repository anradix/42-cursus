/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 08:48:56 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 19:02:41 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	load_tetures(main_strct *m_ptr)
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
	mlx_clear_window(m_ptr->mlx.mlx_init, m_ptr->mlx.win);
	mlx_put_image_to_window(m_ptr->mlx.mlx_init, m_ptr->mlx.win, m_ptr->textures.wall_n, m_ptr->ii, m_ptr->jj);
	return (1);
}
	
int		run(main_strct *m_ptr)
{
	m_ptr->ii= 0;
	m_ptr->jj = 0;
	if (!(m_ptr->mlx.mlx_init = mlx_init()))
		return (0);
	if (!(m_ptr->mlx.win = mlx_new_window(m_ptr->mlx.mlx_init, m_ptr->map.width, m_ptr->map.height, "Cub3d - anradix")))
		return (0);
	load_tetures(m_ptr);
	mlx_put_image_to_window(m_ptr->mlx.mlx_init, m_ptr->mlx.win, m_ptr->textures.wall_n, m_ptr->ii, m_ptr->jj);
	mlx_hook(m_ptr->mlx.win, 2, 0, key_press, m_ptr);
	mlx_loop(m_ptr->mlx.mlx_init);
	return (1);
}
