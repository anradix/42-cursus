/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:11:32 by anradix           #+#    #+#             */
/*   Updated: 2020/02/05 16:20:06 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	update(main_strct *m_ptr)
{
	return (0);
}

bool	game_loop(main_strct *m_ptr)
{
	//update(m_ptr);
	load_mini_map(m_ptr);
	render(m_ptr);
	mlx_hook(m_ptr->mlx.win, 2, 0, key_press, m_ptr);
	mlx_loop(m_ptr->mlx.mlx_init);
	return (1);
}
