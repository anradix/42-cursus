/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 07:18:56 by anradix           #+#    #+#             */
/*   Updated: 2020/01/27 07:27:03 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

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

char		**s_split(char const *s, char c)
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
