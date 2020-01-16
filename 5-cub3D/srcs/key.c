/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:08:51 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 05:39:03 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		key_press(int key, main_struct *s_ptr)
{
	if  (key == 53)
		exit (EXIT_SUCCESS);

	if (key == W)
	{
		s_ptr->jj -= 25;
		mlx_clear_window(s_ptr->mlx.mlx_init, s_ptr->mlx.win);
		mlx_put_image_to_window(s_ptr->mlx.mlx_init, s_ptr->mlx.win, s_ptr->map.wall_w, s_ptr->ii, s_ptr->jj);
		printf("W\n");
	}
	if (key == A)
	{
		s_ptr->ii -= 25;
		mlx_clear_window(s_ptr->mlx.mlx_init, s_ptr->mlx.win);
		mlx_put_image_to_window(s_ptr->mlx.mlx_init, s_ptr->mlx.win, s_ptr->map.wall_w, s_ptr->ii, s_ptr->jj);
		printf("A\n");
	}
	if (key == S)
	{
		s_ptr->jj += 25;
		mlx_clear_window(s_ptr->mlx.mlx_init, s_ptr->mlx.win);
		mlx_put_image_to_window(s_ptr->mlx.mlx_init, s_ptr->mlx.win, s_ptr->map.wall_w, s_ptr->ii, s_ptr->jj);
		printf("S\n");
	}
	if (key == D)
	{
		s_ptr->ii += 25;
		mlx_clear_window(s_ptr->mlx.mlx_init, s_ptr->mlx.win);
		mlx_put_image_to_window(s_ptr->mlx.mlx_init, s_ptr->mlx.win, s_ptr->map.wall_w, s_ptr->ii, s_ptr->jj);
		printf("D\n");
	}
	if (key == ARROW_R)
		printf("arrow_r\n");
	if (key == ARROW_L)
		printf("arrow_l\n");
	return (1);
}

int		key_release(int key, main_struct *s_ptr)
{
	return (1);
}
