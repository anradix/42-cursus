/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 19:01:20 by anradix           #+#    #+#             */
/*   Updated: 2020/07/10 00:46:07 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*c_itoa(int nb, int base)
{
	char	*s;
	size_t	len;
	int		sign;

	if (base < 2 || base > 36)
		return (NULL);
	len = c_nbrlen(nb, base, 0);
	sign = (nb < 0) ? 1 : 0;
	nb *= (nb < 0) ? -1 : 1;
	if (!(s = (char *)m_alloc(len, '\0')))
		return (NULL);
	while (len-- > (size_t)sign)
	{
		s[len] = (nb % base < 10) ? nb % base + '0'
			: nb % base + 'A' - 10;
		nb /= base;
	}
	if (sign)
		s[len] = '-';
	return (s);
}
