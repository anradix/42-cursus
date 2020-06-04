/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 12:53:12 by anradix           #+#    #+#             */
/*   Updated: 2020/06/04 13:43:02 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"


bool	check_file_format(const char *file_path)
{
	size_t i;

	i = s_len(file_path, 0, '\0') - 4;
	return (i >= 1 && !(s_diff(&file_path[i], ".cub"))) ? 1 : 0;
}

char	**import_file(t_struct *s, const char *file_path)
{
	char *tmp;
	char **file_content;

	if (!(check_file_format(file_path)))
		return (NULL);
	if (!(tmp = i_file(file_path)) || (!(file_content = s_split(tmp, '\n'))))
	{
		free(tmp);
		return (NULL);
	}
	free(tmp);
	return (file_content);
}

bool	parsing(t_struct *s, const char *file_path)
{
	char **file;

	if (!(file = import_file(s, file_path)))
		return (0);
	int i = 0;
	size_t l = 13;

	while (i<l)
	{
		free(file[i]);
		i += 1;
	}
	free (file);
	return (1);
}
