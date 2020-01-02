/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 13:47:08 by anradix           #+#    #+#             */
/*   Updated: 2020/01/02 14:46:36 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	init_env(t_game *gameptr, t_window *windowptr)
{
	windowptr->mlx_ptr = mlx_init();
	windowptr->mlx_win = mlx_new_window(windowptr->mlx_ptr, windowptr->height,
		windowptr->width, "cub3d - anradix");
	return (1);
}
