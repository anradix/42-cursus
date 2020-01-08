/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 10:16:17 by anradix           #+#    #+#             */
/*   Updated: 2020/01/08 15:19:15 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	get_map_infos(const char *map, t_game *g_ptr, t_window *w_ptr)
{
	w_ptr->height = 800;
	w_ptr->width = 300;
	g_ptr->map = (char *)map;
	return (1);
}
char	*get_map(const char *map)
{
	char	*file;
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

