/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:47:23 by anradix           #+#    #+#             */
/*   Updated: 2020/03/04 17:26:40 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	draw_square(int **buffer, size_t posX, size_t posY, size_t tileSize, int color)
{
	size_t	stopX;
	size_t	stopY;

	stopX = posX + tileSize;
	stopY = posY + tileSize;
	while(posY < stopY)
	{
		while (posX < stopX)
			buffer[posY][posX++] = color;
		posX -= tileSize;
		posY++;
	}
}
