/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_tab.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:04:08 by anradix           #+#    #+#             */
/*   Updated: 2020/02/10 15:59:38 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	**m_tab(size_t x, size_t y, int c)
{
	int		**tab;

	if (!(tab = (int **)malloc(sizeof(int *) * (y))))
		return (NULL);
	while (y-- > 0)
		tab[y] = m_alloc(x, c);
	return (tab);
}
