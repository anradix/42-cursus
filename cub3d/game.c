/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:11:32 by anradix           #+#    #+#             */
/*   Updated: 2020/02/03 17:31:06 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	mlx_setup(mlx_strct *mlx)
{
	if (!(mlx->mlx_init = mlx_init()))
		return (0);
	if (!(mlx->win = mlx_new_window(mlx->mlx_init,
	g_windows_width, g_windows_height, "Cub4d - anradix")))
		return (0);
	return (1);
}

bool	game_loop(main_strct *m_ptr)
{
	if (!(mlx_setup(&m_ptr->mlx)))
		return (0);
	mlx_hook(m_ptr->mlx.win, 2, 0, key_press, m_ptr);
	mlx_loop(m_ptr->mlx.mlx_init);
	return (1);
}
