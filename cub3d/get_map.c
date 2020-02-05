/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:07:58 by anradix           #+#    #+#             */
/*   Updated: 2020/02/04 22:14:25 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parse_map(main_strct *m_ptr)
{
	g_map_num_rows = 11;
	g_map_num_cols = 15;
	g_tile_size = 32;
	g_windows_width = g_map_num_cols * g_tile_size;
	g_windows_height = g_map_num_rows * g_tile_size;
	return (1);
}

bool	get_map(const char *file_path, main_strct *m_ptr)
{
	char *tmp;

	if (!(tmp = i_file(file_path)) || (!(g_map = s_split(tmp, '\n'))))
	{
		free(tmp);
		return (0);
	}
	free(tmp);
	return (parse_map(m_ptr));
}
