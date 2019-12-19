/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:37:54 by anradix           #+#    #+#             */
/*   Updated: 2019/12/19 12:10:28 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	parsing(const char *arg)
{
	char	*file;
	bool	ret;

	if (!(file = get_file(arg)))
	{
		free(file);
		return (0);
	}
	ret = get_map_info(file);
//	free(file);
	return (0);
}
