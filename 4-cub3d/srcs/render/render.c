/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:42:18 by anradix           #+#    #+#             */
/*   Updated: 2020/04/08 03:43:34 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	generate3dprojection(int **buffer, t_struct s, t_rays rays)
{
	int i = 0;
	int x;
	
	while (i < NUM_RAYS)
	{
		float perpDistance = rays[i].distance * cos(rays[i].rayAngle - s.player.rotationAngle);
		float distanceProjectionPlan = (WINDOW_WIDTH / 2) / tan(FOV_ANGLE / 2);
		float projectdWallHeight = (TILE_SIZE / perpDistance) * distanceProjectionPlan;

		int wallStripeHeight = projectdWallHeight;
		
		int wallTopPixel = (WINDOW_HEIGHT / 2) - (wallStripeHeight / 2);
		wallTopPixel = wallTopPixel < 0 ? 0 : wallTopPixel;

		int wallBottomPixel = (WINDOW_HEIGHT / 2) + (wallStripeHeight / 2);
		wallBottomPixel = wallBottomPixel > WINDOW_HEIGHT ? WINDOW_HEIGHT : wallBottomPixel;

		int j = wallTopPixel;
		// texture implementation
		int textureOffsetX;

		if (rays[i].wasHitVertical)
			textureOffsetX = (int)rays[i].wallHitY % TILE_SIZE;
		else
			textureOffsetX = (int)rays[i].wallHitX % TILE_SIZE;
	
		// on peu changer la texture en fonction du mur avec wallhitcontent si on modifie les valeurs de map quand on l'import
		//printf("%d\n", rays[i].wallHitContent);

		while (j < wallBottomPixel)
		{
			int test;

			if (rays[i].wasHitVertical)
				test = 1;
			else
				test = 0;

			int distanceFromTop = (j + (wallStripeHeight / 2)) - (WINDOW_HEIGHT / 2);
			int textureOffsetY = distanceFromTop * ((float)s.mlx.textu_y / wallStripeHeight);
			uint32_t textelColor = wallTexture[test][(s.mlx.textu_x * textureOffsetY) + textureOffsetX];
		
			x = (WINDOW_WIDTH * j) + i;
			buffer[x / WINDOW_WIDTH][x % WINDOW_WIDTH] = textelColor;
			j++;
		}	
		i++;
	}
}


void	fill_backgroud(int **buffer)
{
	int i = 0;
	int j;

	while (i < WINDOW_HEIGHT)
	{
		j = 0;
		while (j < WINDOW_WIDTH)
		{
			buffer[i][j] = (i < (WINDOW_HEIGHT / 2)) ? 16639453 : 8549746;
			j++;
		}
		i++;
	}
}

void	render(t_struct s, t_rays rays)
{
	int  **buffer;

	buffer = m_tab(WINDOW_WIDTH, WINDOW_HEIGHT, 0);

	fill_backgroud(buffer);
	generate3dprojection(buffer, s, rays);
	render_minimap(buffer, s, rays);
	buffer_to_image(buffer, s);
	int i = WINDOW_HEIGHT;
	while (i-- > 0)
		free(buffer[i]);
	mlx_put_image_to_window(s.mlx.id, s.mlx.win, s.mlx.img_id, 0, 0);
}
