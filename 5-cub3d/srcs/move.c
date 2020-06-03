/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 15:28:59 by anradix           #+#    #+#             */
/*   Updated: 2020/06/03 17:47:09 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		map_wall(float x, float y)
{
	int map_grid_index_x;
	int map_grid_index_y;

	if (x < 0 || x > WINDOW_WIDTH || y < 0 || y > WINDOW_HEIGHT)
		return (TRUE);
	map_grid_index_x = floor(x / TILE_SIZE);
	map_grid_index_y = floor(y / TILE_SIZE);
	return (map[map_grid_index_y][map_grid_index_x] != 0);
}

void	move_player(t_struct *s)
{
    float move_step;
    float new_player_x;
    float new_player_y;

	if(s->player.left_right == 1)
		s->player.rotationAngle += PI/2;
	else if(s->player.left_right == -1)
		s->player.rotationAngle -= PI/2;
	s->player.rotationAngle += s->player.turnDirection * s->player.turnSpeed;

	move_step = s->player.walkDirection * s->player.walkSpeed;
	new_player_x = s->player.x + cos(s->player.rotationAngle) * move_step;
	new_player_y = s->player.y + sin(s->player.rotationAngle) * move_step;

	if (!map_wall(new_player_x, new_player_y))
	{
        s->player.x = new_player_x;
        s->player.y = new_player_y;
    }
	if(s->player.left_right == 1)
		s->player.rotationAngle -= PI/2;
	else if(s->player.left_right == -1)
		s->player.rotationAngle += PI/2;
}
