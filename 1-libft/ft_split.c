/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:18:25 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:07:44 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_split() function allocate (with malloc (3)) and return a table got
** to separate the chains to using the character c, used as delimiter.
** The array must be terminated with NULL.
*/

#include "libft.h"
#include <stdlib.h>

static int	wcount(const char *s, char c)
{
	size_t nb_words;
	size_t i;

	nb_words = 0;
	i = 0;
	if (s[0] != c)
		nb_words++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			nb_words++;
		i++;
	}
	return (nb_words);
}

static int	wlen(char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	j;
	size_t	k;

	if (!s || (!(tab = ((char**)malloc(sizeof(char*) * (wcount(s, c) + 1))))))
		return (NULL);
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			k = 0;
			if (!(tab[j] = (char*)malloc(sizeof(char) * wlen(s, c) + 1)))
				return (NULL);
			while (*s != c && *s != '\0')
				tab[j][k++] = *s++;
			tab[j][k++] = '\0';
			j++;
		}
		else
			s++;
	}
	tab[j] = NULL;
	return (tab);
}
