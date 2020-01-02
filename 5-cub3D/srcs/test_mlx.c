/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 14:02:22 by anradix           #+#    #+#             */
/*   Updated: 2020/01/02 16:08:30 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
/*
void	fill(t_img *img, unsigned int color)
{
	int p_x;
	int p_y;

	p_x = -1;
	while  (++p_x < img->height)
	{
		p_y = -1;
		while (++p_y < img->width)
			ft_put_pixel(img, color, p_x, p_y);
	}
}*/

void	ft_put_pixel(t_img *img, unsigned int color, int p_x, int p_y)
{
	//verifier avant que le pixel n'est pas en dehors de l'img
	img->img_data[p_y * img->height + p_x] = color;
}

bool	new_img(int width, int height)
{
	img->img_ptr = mlx_new_image (env->mlx_ptr, width, height);
	//ici je caste en int pour que ca puisse stocker la couleur
    img->img_data = (int *)mlx_get_data_addr(img->img_ptr, &img->bpp, &img->size_line, &img->endian);
	img->width = width;
	img->height = height;
	return (img);
	//ne pas oublier de free, destroy image
}

bool	test_mlx(t_game *gameptr, t_window *windowptr)
{
	new_img(t_window->width, t_window->height / 2);	
	return (1);
}
