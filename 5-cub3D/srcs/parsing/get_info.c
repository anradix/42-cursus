/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 11:40:00 by anradix           #+#    #+#             */
/*   Updated: 2019/12/19 12:09:14 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	get_info_path(const char *file, size_t *i)
{
	return (1);
}

bool	get_info_value(const char *file, size_t *i)
{
	t_window *winptr;

	int j = 0;
	if (file[j] == 'R')	
	{
		winptr->width = atoi(&file[j]);
		printf("%d\n", winptr->width);
		return (0);
	}
	return (0);	
}

bool	get_map_info(const char *file)
{
	size_t	i;

	i = 0;
	get_info_value(file, &i);
	return (0);
/*	while(file[i] && file[i] != '1')
	{
		if ((file[i] == 'R' || file[i] == 'F' || file[i] == 'C')
		&& !get_info_value(file, &i))
			return (0);
		else if ((file[i] == 'N' || file[i] == 'S' || file[i] == 'W'
		|| file[i] == 'E')
		&& !get_info_path(file, &i))
			return (0);
		else if (file[i] == '\n')
			i++;
		else
			return (0);
	}*/
	return (get_map(file, i));
}
