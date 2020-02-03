/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:58:29 by anradix           #+#    #+#             */
/*   Updated: 2020/02/03 17:31:42 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		key_press(int key, main_strct *m_ptr)
{
	if  (key == 53)
		exit (EXIT_SUCCESS);
/*	if (key == W)
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
	mlx_put_image_to_window(m_ptr->mlx.mlx_init, m_ptr->mlx.win, m_ptr->textures.wall_n, m_ptr->ii, m_ptr->jj);*/
	return (1);
}
