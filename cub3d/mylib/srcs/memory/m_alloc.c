/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_alloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:54:40 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 08:06:22 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void	*m_alloc(size_t size)
{
	char *s;

	if (!(s = (char*)malloc(sizeof(char*) * size)))
		return (NULL);
	m_zero(s, size);
	return (s);
}
