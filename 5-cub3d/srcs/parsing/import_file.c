/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   import_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 19:07:48 by anradix           #+#    #+#             */
/*   Updated: 2020/06/04 19:10:49 by anradix          ###   ########.fr       */
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
