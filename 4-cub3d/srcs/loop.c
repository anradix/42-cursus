/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:31:38 by anradix           #+#    #+#             */
/*   Updated: 2020/02/27 22:13:30 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	game_loop(t_struct s)
{
	update(&s);
	render(s);
	free(s.rays);
	mlx_hook(s.mlx.win, 2, 0, &key_press, &s);
	mlx_hook(s.mlx.win, 3, 0, &key_release, &s);
	mlx_loop(s.mlx.id);
}
