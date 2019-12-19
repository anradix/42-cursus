/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 07:49:07 by anradix           #+#    #+#             */
/*   Updated: 2019/12/19 07:49:58 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	*get_file(const char *arg)
{
	char	*file;;
	char	*tmp;
	char	buff[BUFF_SIZE + 1];
	int		fd;
	int		ret;

	fd = open(arg, O_RDONLY);
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
