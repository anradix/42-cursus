/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:42:18 by anradix           #+#    #+#             */
/*   Updated: 2020/02/26 20:11:12 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

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
				draw_square(buffer, posJ, posI,	TILE_SIZE * MINIMAP_SCALE_FACTOR, 8900331);
			j++;
		}
		i++;
	}
}

void render_player(int **buffer, t_struct s)
{
	printf("x = %f || y = %f\n", s.player.x, s.player.y);
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

void	render(t_struct s)
{
	int  **buffer;

	buffer = m_tab(WINDOW_WIDTH, WINDOW_HEIGHT, 0);
	render_map(buffer);
	render_player(buffer, s);
	buffer_to_image(buffer, s);
	int i = WINDOW_HEIGHT;
	while (i-- > 0)
	{
		free(buffer[i]);
	}
	mlx_put_image_to_window(s.mlx.id, s.mlx.win, s.mlx.img_id, 0, 0);
}
