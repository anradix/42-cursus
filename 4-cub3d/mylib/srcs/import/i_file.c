/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_file.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 08:00:23 by anradix           #+#    #+#             */
/*   Updated: 2020/02/19 20:09:55 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*i_file(const char *file_path)
{
	char	*file;
	char	*tmp;
	char	buff[BUFF_SIZE + 1];
	int		fd;
	int		ret;

	fd = open(file_path, O_RDONLY);
	if (fd < 0 || BUFF_SIZE < 1 || read(fd, buff, 0) != 0
	|| !(file = (char *)m_alloc(1, '\0')))
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
