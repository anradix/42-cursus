/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 10:16:17 by anradix           #+#    #+#             */
/*   Updated: 2020/01/02 14:43:49 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	get_map_infos(t_game *gameptr, t_window *windowptr, char *map)
{
	windowptr->height = 400;
	windowptr->width = 200;
	gameptr->map = map;
	gameptr->floor_color[0] = 10;
	gameptr->floor_color[1] = 10;
	gameptr->floor_color[2] = 10;
	gameptr->ceiling_color[0] = 110;
	gameptr->ceiling_color[1] = 110;
	gameptr->ceiling_color[2] = 110;
	return (1);
}
char	*get_map(const char *map)
{
	char	*file;;
	char	*tmp;
	char	buff[BUFF_SIZE + 1];
	int		fd;
	int		ret;

	fd = open(map, O_RDONLY);
	if (fd < 0 || BUFF_SIZE < 1 || read(fd, buff, 0) != 0 || !(file = m_alloc(1)))
		return (NULL);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = file;
		if (!(file = s_join(tmp, buff)))
		{
			free(file);
			return (NULL);
		}
		free(tmp);
	}
	return (file);
}

