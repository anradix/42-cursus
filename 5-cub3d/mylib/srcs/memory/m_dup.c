/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_dup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 00:28:29 by anradix           #+#    #+#             */
/*   Updated: 2020/09/16 19:56:11 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*m_dup(const char *s)
{
	int		len;
	char	*dup;

	len = s_len(s, 0, 0);
	if (!s || !(dup = m_alloc(len, '\0')))
		return (NULL);
	while (len--)
		dup[len] = s[len];
	return (dup);
}
