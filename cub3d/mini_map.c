/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:24:26 by anradix           #+#    #+#             */
/*   Updated: 2020/02/05 17:25:12 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	draw_mini_map(main_strct *m_ptr)
{
	/*int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < 1) //m_ptr->mini_map.height)
	{
		j = 0;
		while (j < m_ptr->mini_map.width)
		{
			m_ptr->mlx.addr[k] = 8900331;
			k++;
			j++;
		}
		i++;
	}*/
}

void	draw_block(main_strct *m_ptr, int i, int j, int pos)
{
/*
	int start;
	int stop;
// PREMIER BLOCK

	value :  i = 0, j = 0;
	. -> 0, 0
	. >  0, 
	. -> 0, 2

	. -> 1, 0,
	. -> 1, 1
	. -> 1, 2

	. -> 2, 0
	. -> 2, 1
	. -> 2, 2
// DEUXIEME BLOCK 
	value : i = 0, j = 1*/

}

int		*m_fflatten(int  **tab, size_t x, size_t y)
{
	size_t	i;
	size_t	j;
	void	*s;

	if (!(s = (int *)malloc(sizeof(int) * (x * y))))
		return (NULL);
/*	j = 0;
	while (y > 0)
	{
		i = 0;
		while (i < x)
			((unsigned char*)s)[j++] = ((unsigned char**)tab)[y][i++];
		y--;
	}*/
	return (s);
}

void	load_mini_map(main_strct *m_ptr)
{
/*	int i;
	int j;
	int pos;

	i = 0;
	while (i < g_map_num_rows)
	{
		j = 0;
		while(j <= g_map_num_cols)
		{
			if (g_map[i][j] == '1')
			{
				pos = (j * 3) + ((i * 3) * (g_windows_width));	
				m_ptr->mlx.addr[pos] = 8900331;	
			}
			j++;
		}
		i++;
	}
	*/
	int i = 0;
	while (i < 10)
	{
		m_ptr->mlx.iaddr[i][0] = 8900331;	
		i++;
	}
	i = 0;
	while (i < 10)
	{
		m_ptr->mlx.addr[i] = m_ptr->mlx.iaddr[0][i];
		i++;
	}
	//	draw_mini_map(m_ptr);
}
