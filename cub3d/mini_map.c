/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:24:26 by anradix           #+#    #+#             */
/*   Updated: 2020/02/05 01:10:33 by anradix          ###   ########.fr       */
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
	. >  0, 1
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

void	load_mini_map(main_strct *m_ptr)
{
	int i;
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
//	draw_mini_map(m_ptr);
	// penser a splitter img et a unsplit a la fin

}
