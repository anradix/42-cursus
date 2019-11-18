/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 17:07:34 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:33:31 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_init_tab() function allocates a 2d array size x by y bytes and the
** memory is initialized by c.
*/

#include "libft.h"
#include <stdlib.h>

void	**ft_init_tab(size_t y, size_t x, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (y + 1))))
		return (NULL);
	while (i < y)
	{
		j = 0;
		if (!(tab[i] = (char *)malloc(sizeof(char) * (x + 1))))
			return (0);
		while (j < x)
		{
			tab[i][j] = c;
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return ((void**)tab);
}
