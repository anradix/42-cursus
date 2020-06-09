/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 12:53:12 by anradix           #+#    #+#             */
/*   Updated: 2020/06/05 23:26:15 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/* TO DO DEMAIN:
 *i		faire la fonctions ou je check chaque ligne 
		faire le if pour etre sur que chaque element de ma structure ne soit pas = 0 (que yq bien tt les param
 *
 */

int		get_lineinfos(t_struct *s, char *line)
{
 // s_trim erreur si s = " "
 // erreur si s est alloue sur la stack, ne pas free dans la focntion elle meme 
	char *tmp;
	
	tmp = s_trim(ss, ' ');
	printf("%s\n", line);
/*
	if (!line)
		return (0);
	s_trim
		
	trim les espaces mains on en garde toujour 1 dans file_line;
	
	if tim [0] -> appele une fonction avec 
	*/
	return (1);
}

char	**get_mapinfos(t_struct *s,char **file)
{
	size_t nb_info;
	short ret;

	nb_info = 8;
	while  (nb_info && file)
	{
		ret = get_lineinfos(s, *file);
		if (ret == 1)
			nb_info--;
		else if (ret == 0) // invalid 
			break ;
		file++;
	}
	if (!s->player.x)
		printf("dfjqfdiojqw");
	return (file);
}

bool	get_map(t_struct *s, char **file)
{
	if (!(file = get_mapinfos(s, file)))
		return (0);
	return (1);
}

bool	parsing(t_struct *s, const char *file_path)
{
	char **file;

	if (!(file = import_file(s, file_path)))
		return (0);
	if (!get_map(s, file))
		return (0);
	return (1);
}
