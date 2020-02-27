/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:44:24 by anradix           #+#    #+#             */
/*   Updated: 2020/02/27 21:45:22 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	render_player(int **buffer, t_struct s)
{
	draw_square(buffer,
		s.player.x * MINIMAP_SCALE_FACTOR,
		s.player.y * MINIMAP_SCALE_FACTOR,
		s.player.width * (MINIMAP_SCALE_FACTOR * 12), 15418368);

	draw_line(buffer,
    (int)((MINIMAP_SCALE_FACTOR * s.player.x) + 6),
    (int)((MINIMAP_SCALE_FACTOR * s.player.y) + 6),
    (int)(MINIMAP_SCALE_FACTOR * (s.player.x + cos(s.player.rotationAngle) * 40)),
    (int)(MINIMAP_SCALE_FACTOR * (s.player.y + sin(s.player.rotationAngle) * 40)), 8900331);
}
