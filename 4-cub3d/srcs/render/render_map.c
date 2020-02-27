/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:44:23 by anradix           #+#    #+#             */
/*   Updated: 2020/02/27 21:45:01 by anradix          ###   ########.fr       */
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
