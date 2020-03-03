/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:55:02 by anradix           #+#    #+#             */
/*   Updated: 2020/03/02 14:02:03 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cub3d.h"

void	render_map(int **buffer)
{
	size_t i;
	size_t j;
	size_t posI;
	size_t posJ;

	i = 0;
	while (i < MAP_NUM_COLS)
	{
		j = 0;
		posI = i * (TILE_SIZE * MINIMAP_SCALE_FACTOR);
		while (j < MAP_NUM_COLS)
		{
			posJ = j * (TILE_SIZE * MINIMAP_SCALE_FACTOR);
			if (map[i][j] == 1)
				draw_square(buffer, posJ, posI,	TILE_SIZE * MINIMAP_SCALE_FACTOR + 1, 8900331);
			j++;
		}
		i++;
	}
}

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

void	render_minimap(int **buffer, t_struct s)
{
	render_map(buffer);
	render_player(buffer, s);
}
