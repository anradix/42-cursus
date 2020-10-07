/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_nbr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 00:53:56 by anradix           #+#    #+#             */
/*   Updated: 2020/09/16 19:57:47 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void	p_nbr(long long nb, int base)
{
	char	buff[c_nbrlen(nb, base, 0)];
	size_t	i;

	i = 0;
	if (base < 2)
		return ;
	if (nb < 0)
	{
		buff[i] = '-';
		nb = -nb;
		i++;
	}
	while (nb >= base)
	{
		nb /= base;
		buff[i] = (nb % base < 10) ? nb % base + '0' : nb % base + 'A' - 10;
		i++;
	}
	buff[i] = (nb % base < 10) ? nb % base + '0' : nb % base + 'A' - 10;
	write(1, &buff, i + 1);
}
