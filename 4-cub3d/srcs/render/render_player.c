/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:44:24 by anradix           #+#    #+#             */
/*   Updated: 2020/02/27 22:40:12 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	render_player(int **buffer, t_struct s)
{
	draw_square(buffer,
		(s.player.x - 6) * MINIMAP_SCALE_FACTOR,
		(s.player.y - 6)  * MINIMAP_SCALE_FACTOR,
		s.player.width * (MINIMAP_SCALE_FACTOR * 12), 8900331);

	draw_line(buffer,
    (int)((MINIMAP_SCALE_FACTOR * s.player.x)),
    (int)((MINIMAP_SCALE_FACTOR * s.player.y)),
    (int)(MINIMAP_SCALE_FACTOR * (s.player.x + cos(s.player.rotationAngle) * 40)),
    (int)(MINIMAP_SCALE_FACTOR * (s.player.y + sin(s.player.rotationAngle) * 40)), 8900331);
}
