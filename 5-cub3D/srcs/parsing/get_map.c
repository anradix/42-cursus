/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 10:16:17 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 05:12:29 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	get_map_infos(main_struct *s_ptr)
{
	s_ptr->map.height = 1600;
	s_ptr->map.width = 720;
	s_ptr->map.path_wall_n =  "./textures/wall_n.xpm";
	s_ptr->map.path_wall_s =  "./textures/wall_s.xpm";
	s_ptr->map.path_wall_e =  "./textures/wall_e.xpm";
	s_ptr->map.path_wall_w =  "./textures/wall_w.xpm";
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
