/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 23:41:29 by anradix           #+#    #+#             */
/*   Updated: 2020/03/04 18:18:56 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	draw_line(int **buffer, int xdep, int ydep, int xfin, int yfin, int color)
{
	float a=0;
	int temp=0;
	int cste=0;

	unsigned int dy;
	unsigned int dx;

   dx=abs(xfin-xdep);
   dy=abs(yfin-ydep);
	if(dx>=dy && dx!=0 && dy!=0)
	{
		if(xdep>xfin)
		{
			temp=xdep;
			xdep=xfin;
			xfin=temp;

			temp=ydep;
			ydep=yfin;
			yfin=temp;
		}
		a=((float)(yfin-ydep)/(xfin-xdep));
		for(int x=0;x<dx+1;x++)
		 buffer[(int)(ydep+(x*a)+cste)][(int)(x+xdep)] = color;
	}
	if(dx<dy && dx!=0 && dy!=0)
	{
		if(ydep>yfin)
		{
			temp=ydep;
			ydep=yfin;
			yfin=temp;
			temp=xdep;
			xdep=xfin;
			xfin=temp;
		}
		a=((float)(xfin-xdep)/(yfin-ydep));
		for(int y=0;y<dy+1;y++)
		{
				buffer[(int)(y+ydep)][(int)(xdep+(y*a))] = color;
		}
	}

	if(dx==0)
	{
		if(ydep>yfin)
		{
			temp=ydep;
			ydep=yfin;
			yfin=temp;
		}
		for(int y=ydep;y<yfin+1;y++)
			buffer[y][xdep] = color;
	}
	if(dy==0)
	{
		if(xdep>xfin)
		{
			temp=xdep;
			xdep=xfin;
			xfin=temp;
		}
		for(int x=xdep;x<xfin+1;x++)
			buffer[ydep][x] = color;
	}
}
