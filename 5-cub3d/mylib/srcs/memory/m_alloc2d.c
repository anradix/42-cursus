/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_alloc2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 00:24:39 by anradix           #+#    #+#             */
/*   Updated: 2020/09/16 20:09:24 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	**m_alloc2d(size_t y, size_t x, char c)
{
	char	**s;
	size_t	i;

	if (!(s = (char**)malloc(sizeof(char*) * y + 1)))
		return (NULL);
	i = 0;
	while (i < y)
	{
		if (!(s[i] = m_alloc(x, c)))
		{
			s[i] = NULL;
			m_free2d(s);
			return (NULL);
		}
		i++;
	}
	s[i] = NULL;
	return (s);
}
