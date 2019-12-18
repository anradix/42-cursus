/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:37:54 by anradix           #+#    #+#             */
/*   Updated: 2019/12/18 09:07:52 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	*get_file(const char *arg)
{
	char	*file;
	char	*tmp;
	char	buff[BUFF_SIZE + 1];
	int		fd;
	int		ret;

	fd = open(arg, O_RDONLY);
	if (fd < 0 || BUFF_SIZE < 1 || read(fd, buff, 0) != 0)
			return (NULL);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
{
		buff[ret] = '\0';
		tmp = file;
		if (!(file = s_join(tmp, buff)))
		{
			free (tmp);
			return (0);
		}
		free(tmp);
	}
	return (file);
}

bool	parsing(const char *arg)
{
	char	*file;

	if (!(file = get_file(arg)))
		return (0);
	printf("%s\n", file);
	return (1);
}
