/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_trim.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 16:01:10 by anradix           #+#    #+#             */
/*   Updated: 2020/07/10 00:43:33 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

static size_t	get_new_len(char *s, char c)
{
	size_t i;
	size_t new_len;

	i = 0;
	new_len = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		new_len++;
		i++;
	}
	return (new_len);
}

char			*s_trim(char *s, char c)
{
	char	*trim;
	size_t	i;
	size_t	j;

	if (!s || !(trim = m_alloc(get_new_len(s, c), '\0')))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
			i--;
		}
		trim[j++] = s[i++];
	}
	if (trim[j - 1] == c)
		trim[j - 1] = '\0';
	trim[j] = '\0';
	return (trim);
}
