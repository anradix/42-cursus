/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_to_image.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 23:17:36 by anradix           #+#    #+#             */
/*   Updated: 2020/02/25 23:18:38 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	buffer_to_image(int **buffer, t_struct s)
{
	size_t i;
	size_t j;
	size_t i_img;

	i = 0;
	i_img = 0;
	while (i < WINDOW_HEIGHT)
	{
		j = 0;
		while (j < WINDOW_WIDTH)
		{
			s.mlx.img[i_img] = buffer[i][j];
			j++;
			i_img++;
		}
		i++;
	}
}
