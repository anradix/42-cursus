/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 07:24:15 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 09:31:18 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/* HAVE TO DO PARSING (CHECK MAP INFOS) + GET MAP AND CHECK MAP. */
bool	get_map_infos(char *file, main_strct *m_ptr)
{
	m_ptr->map.width = 2000;
	m_ptr->map.height = 1000;
	if ((!(m_ptr->textures.path_wall_n =  "./textures/wall_n.xpm")) ||
		(!(m_ptr->textures.path_wall_s =  "./textures/wall_s.xpm")) ||
		(!(m_ptr->textures.path_wall_e =  "./textures/wall_e.xpm")) ||
		(!(m_ptr->textures.path_wall_w =  "./textures/wall_w.xpm")))
			return (0);
	return (1);
}

int		parsing(const char *file_path, main_strct *m_ptr)
{
	char *file;

	if (!(file = i_file(file_path)))
		return (CANNOT_IMPORT_MAP);
	if (!get_map_infos(file, m_ptr))// || !(m_ptr->map.fmap = get_map(file)))
	{
		free(file);
		return (MAP_ERROR);
	}
	return (1);
}
