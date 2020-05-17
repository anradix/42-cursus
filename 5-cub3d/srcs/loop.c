/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:31:38 by anradix           #+#    #+#             */
/*   Updated: 2020/04/30 10:19:11 by anradix          ###   ########.fr       */
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
	mlx_hook(s.mlx.win, 2, 0, &key_press, &s);
	mlx_hook(s.mlx.win, 3, 0, &key_release, &s);
	update(&s);
	mlx_loop(s.mlx.id);
	return (1);
}
