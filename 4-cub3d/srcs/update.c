/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:33:20 by anradix           #+#    #+#             */
/*   Updated: 2020/04/08 20:34:53 by anradix          ###   ########.fr       */
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
    s->player.rotationAngle += s->player.turnDirection * s->player.turnSpeed * deltaTime;
	// Get scale between 1.57 and 7.85(TWO PI)
	s->player.rotationAngle = fabsf(s->player.rotationAngle);
	if (s->player.rotationAngle >= 7.853981)
		s->player.rotationAngle = 1.570796;

    float moveStep = s->player.walkDirection * s->player.walkSpeed * deltaTime;

	// modif code a delet
	if (s->player.walkDirection == 2 || s->player.walkDirection == -2)
		moveStep = 0;
	// ------------ //
    float newPlayerX = s->player.x + cos(s->player.rotationAngle) * moveStep;
    float newPlayerY = s->player.y + sin(s->player.rotationAngle) * moveStep;

	// Modif code a delet
	if (s->player.walkDirection == 2)
	{
		
	s->player.rotationAngle = fabsf(s->player.rotationAngle);
		// JE TOURNE EN FONCTION DES AXES X ET Y SANS PRENDRE EN COMPTE MON 
		newPlayerX -= 0;
		newPlayerY -= 10;
	}
	if (s->player.walkDirection == -2)
	{
		newPlayerX += 0;
		newPlayerY += 10;
	}
	// ------------- //

	if (!map_wall(newPlayerX, newPlayerY))
	{
        s->player.x = newPlayerX;
        s->player.y = newPlayerY;
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
