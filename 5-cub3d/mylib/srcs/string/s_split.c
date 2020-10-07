/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 07:18:56 by anradix           #+#    #+#             */
/*   Updated: 2020/09/16 20:13:20 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

static int		wcount(char *s, char c)
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

static char		**s_split_error(char **tab, int j)
{
	tab[j] = NULL;
	m_free2d(tab);
	return (NULL);
}

char			**s_split(char *s, char c)
{
	int		j;
	char	**tab;
	int		k;

	j = 0;
	if (!s || (!(tab = (char**)malloc(sizeof(char*) *
		(wcount(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			if (!(tab[j] = m_alloc(s_len(&(*s), 0, c), '\0')))
				return (s_split_error(tab, j));
			k = 0;
			while (*s && *s != c)
				tab[j][k++] = *(s++);
			tab[j][k] = '\0';
			j++;
		}
		else
			s++;
	}
	tab[j] = NULL;
	return (tab);
}
