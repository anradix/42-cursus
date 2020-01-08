/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 10:16:16 by anradix           #+#    #+#             */
/*   Updated: 2020/01/08 16:57:20 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parsing(const char *map_path, main_struct *s_ptr)
{
	s_ptr->map.f_map = get_map(map_path);
	get_map_infos(s_ptr);
	//check map to do
	return (1);
}
