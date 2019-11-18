/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 16:50:29 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:34:54 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_tabdup() function duplicate a 2d array.
*/

#include "libft.h"
#include "stdlib.h"

char	**ft_tabdup(char **tab, size_t start, size_t finish)
{
	char		**dup;
	size_t		i;

	i = start;
	if (finish < ft_tablen(tab))
	{
		if (!(dup = (char **)malloc(sizeof(char *) * (finish - start + 1) + 1)))
			return (NULL);
	}
	else
	{
		if (!(dup = (char **)malloc(sizeof(char *) * ft_tablen(tab) + 1)))
			return (NULL);
	}
	while (i < finish && tab[i])
	{
		dup[i] = ft_strdup(tab[i]);
		i++;
	}
	return (dup);
}
