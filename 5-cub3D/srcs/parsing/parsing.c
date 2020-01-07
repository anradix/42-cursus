/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 10:16:16 by anradix           #+#    #+#             */
/*   Updated: 2020/01/02 14:39:20 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool parsing(const char *map_path, t_game *gameptr, t_window *windowptr)
{
	char *map;

	if (!(map = get_map(map_path)))
		return (0);
	if (!(get_map_infos(gameptr, windowptr, map)))
		return (0);
	//check map()
	return (1);
}