/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:33:20 by anradix           #+#    #+#             */
/*   Updated: 2020/04/13 15:24:13 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		map_wall(float x, float y)
{
    int mapGridIndexX;
    int mapGridIndexY;

    if (x < 0 || x > WINDOW_WIDTH || y < 0 || y > WINDOW_HEIGHT)
		return (TRUE);
    mapGridIndexX = floor(x / TILE_SIZE);
    mapGridIndexY = floor(y / TILE_SIZE);
    return (map[mapGridIndexY][mapGridIndexX] != 0);
}

void	move_player(t_struct *s)
{
    float moveStep;
    float newPlayerX;
    float newPlayerY;

	if(s->player.left_right == 1)
		s->player.rotationAngle += PI/2;
	else if(s->player.left_right == -1)
		s->player.rotationAngle -= PI/2;
	s->player.rotationAngle += s->player.turnDirection * s->player.turnSpeed;

	moveStep = s->player.walkDirection * s->player.walkSpeed;
	newPlayerX = s->player.x + cos(s->player.rotationAngle) * moveStep;
	newPlayerY = s->player.y + sin(s->player.rotationAngle) * moveStep;

	if (!map_wall(newPlayerX, newPlayerY))
	{
        s->player.x = newPlayerX-0.0001;
        s->player.y = newPlayerY+0.0001;
    }
	if(s->player.left_right == 1)
		s->player.rotationAngle -= PI/2;
	else if(s->player.left_right == -1)
		s->player.rotationAngle += PI/2;
}

void	update(t_struct *s)
{
	t_rays rays;

	move_player(s);
	cast_all_rays(s, rays);
	render(*s, rays);
}
