/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:11:32 by anradix           #+#    #+#             */
/*   Updated: 2020/02/04 19:52:48 by anradix          ###   ########.fr       */
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
	if (!(mlx->img = mlx_new_image(mlx->mlx_init, g_windows_width, g_windows_height)))
		return (0);
	mlx->addr = (void *)mlx_get_data_addr(mlx->img, &mlx->bits,
	&mlx->size_line, &mlx->endian);
	return (1);
}

bool	update(main_strct *m_ptr)
{
	return (0);
}

bool	game_loop(main_strct *m_ptr) // draw 
{
	if (!(mlx_setup(&m_ptr->mlx)))
		return (0);
	//update(m_ptr);
	load_mini_map(m_ptr);
	render(m_ptr);
	mlx_hook(m_ptr->mlx.win, 2, 0, key_press, m_ptr);
	mlx_loop(m_ptr->mlx.mlx_init);
	return (1);
}
