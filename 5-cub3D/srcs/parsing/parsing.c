/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 10:16:16 by anradix           #+#    #+#             */
/*   Updated: 2020/01/07 17:24:30 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool parsing(const char *map_path, t_game *g_ptr, t_window *w_ptr)
{
	char *map;

	if (!(map = get_map(map_path)))
		return (0);
	if (!(get_map_infos(map, g_ptr, w_ptr)))
		return (0);
	//check map()
	return (1);
}
