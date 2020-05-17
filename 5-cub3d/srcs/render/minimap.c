/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:55:02 by anradix           #+#    #+#             */
/*   Updated: 2020/04/13 15:10:38 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cub3d.h"

void	render_map(int **buffer)
{
	size_t i;
	size_t j;
	size_t posI;
	size_t posJ;

	i = -1;
	while (++i < MAP_NUM_ROWS)
	{
		j = -1;
		posI = i * (TILE_SIZE * MINIMAP_SCALE_FACTOR) + 12;
		while (++j < MAP_NUM_COLS)
		{
			posJ = j * (TILE_SIZE * MINIMAP_SCALE_FACTOR) + 12;
			if (map[i][j] == 1)
				draw_square(buffer, posJ, posI,	TILE_SIZE *	MINIMAP_SCALE_FACTOR+1, 8900331);
			else if (map[i][j] != 1)
				draw_square(buffer, posJ, posI,	TILE_SIZE *	MINIMAP_SCALE_FACTOR+1, 0);
		}
	}
}

void	render_rays(int **buffer, t_struct s, t_rays rays)
{
	int i;

	i = -1;
	while (++i < NUM_RAYS)
		draw_line(buffer,
			(int)((MINIMAP_SCALE_FACTOR * s.player.x + 12)),
			(int)((MINIMAP_SCALE_FACTOR * s.player.y + 12)),
			(int)((MINIMAP_SCALE_FACTOR * rays[i].wallHitX + 12)),
			(int)((MINIMAP_SCALE_FACTOR * rays[i].wallHitY + 12)),
			15418368);
}

void	render_player(int **buffer, t_struct s)
{
	int player_size;

	player_size = 25;
	draw_square(buffer,
		(s.player.x -(player_size/2)) * MINIMAP_SCALE_FACTOR +12,
		(s.player.y) * MINIMAP_SCALE_FACTOR + 12,
		player_size * (MINIMAP_SCALE_FACTOR), 8900331);
}

void	render_minimap(int **buffer, t_struct s, t_rays rays)
{
	render_map(buffer);
	render_rays(buffer, s, rays);
	render_player(buffer, s);
}
