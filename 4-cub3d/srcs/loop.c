/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:31:38 by anradix           #+#    #+#             */
/*   Updated: 2020/04/13 15:38:47 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	update(t_struct *s)
{
	t_rays rays;

	move_player(s);
	cast_all_rays(s, rays);
	render(*s, rays);
}

int	game_loop(t_struct s)
{
	update(&s);
	mlx_hook(s.mlx.win, 2, 0, &key_press, &s);
	mlx_hook(s.mlx.win, 3, 0, &key_release, &s);
	mlx_loop(s.mlx.id);
	return (1);
}
