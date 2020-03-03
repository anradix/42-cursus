/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:42:18 by anradix           #+#    #+#             */
/*   Updated: 2020/03/03 23:27:05 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	generate3dprojection(int **buffer, t_struct s, t_rays rays)
{
	int i = 0;
	
	while (i < NUM_RAYS)
	{
		float distanceProjectionPlan = (WINDOW_WIDTH / 2) / tan(FOV_ANGLE / 2);
		float projectdWallHeight = (TILE_SIZE / rays[i].distance) * distanceProjectionPlan;

		int wallStripeHeight = projectdWallHeight;
		
		int wallTopPixel = (WINDOW_HEIGHT / 2) - (wallStripeHeight / 2);
		wallTopPixel = wallTopPixel < 0 ? 0 : wallTopPixel;

		int wallBottomPixel = (WINDOW_HEIGHT / 2) + (wallStripeHeight / 2);
		wallBottomPixel = wallBottomPixel > WINDOW_HEIGHT ? WINDOW_HEIGHT : wallBottomPixel;

		int j = wallTopPixel;
		while (j < wallBottomPixel)
		{
			s.mlx.img[(WINDOW_WIDTH * j) + i] = 15418368;
			j++;
		}	
		i++;
	}
}

void	clean_img(t_struct s)
{
	int i = 0;

	while (i < (WINDOW_WIDTH * WINDOW_HEIGHT))
	{
		s.mlx.img[i] = 0;
		i++;
	}
}

void	render(t_struct s, t_rays rays)
{
	int  **buffer;

	buffer = m_tab(WINDOW_WIDTH, WINDOW_HEIGHT, 0);

	//render_rays(buffer, s, rays);
	generate3dprojection(buffer, s, rays);
//	render_minimap(buffer, s);
	//buffer_to_image(buffer, s);
	int i = WINDOW_HEIGHT;
	while (i-- > 0)
		free(buffer[i]);
	mlx_put_image_to_window(s.mlx.id, s.mlx.win, s.mlx.img_id, 0, 0);
	clean_img(s);
}
