/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:33:20 by anradix           #+#    #+#             */
/*   Updated: 2020/04/08 21:50:36 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		map_wall(float x, float y)
{
    if (x < 0 || x > WINDOW_WIDTH || y < 0 || y > WINDOW_HEIGHT)
	{
		return TRUE;
    }
    int mapGridIndexX = floor(x / TILE_SIZE);
    int mapGridIndexY = floor(y / TILE_SIZE);
    return map[mapGridIndexY][mapGridIndexX] != 0;
}

void	move_player(float deltaTime, t_struct *s)
{
	if(s->player.left_right == 1)
		s->player.rotationAngle += PI/2;
	if(s->player.left_right == -1)
		s->player.rotationAngle -= PI/2;


	// Get scale between 1.57 and 7.85(TWO PI)
    s->player.rotationAngle += s->player.turnDirection * s->player.turnSpeed * deltaTime;

    float moveStep = s->player.walkDirection * s->player.walkSpeed * deltaTime;
    float newPlayerX = s->player.x + cos(s->player.rotationAngle) * moveStep;
    float newPlayerY = s->player.y + sin(s->player.rotationAngle) * moveStep;

	if (!map_wall(newPlayerX, newPlayerY))
	{
        s->player.x = newPlayerX;
        s->player.y = newPlayerY;
    }
	if (s->player.left_right == 1 || s->player.left_right == -1)
	{
		s->player.walkDirection = 0;
		if (s->player.left_right == 1)
			s->player.rotationAngle -= PI/2;
		else
			s->player.rotationAngle += PI/2;
		s->player.left_right = 0;
		move_player(deltaTime, s);
	}
}

void	update(t_struct *s)
{
	t_rays rays;

	float deltaTime = 0.040;

	move_player(deltaTime, s);
	cast_all_rays(s, rays);
	render(*s, rays);
}
