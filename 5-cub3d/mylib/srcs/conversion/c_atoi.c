/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:58:57 by anradix           #+#    #+#             */
/*   Updated: 2020/06/08 00:28:03 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	c_atoi(const char *nptr)
{
	short		sign;
	long long	n;

	sign = 1;
	n = 0;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
		nptr++;
	sign = (*nptr == '-') ? -1 : 1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
		n = ((n * 10) + (*nptr++ - '0'));
	if (n > 9223372036854775806)
		return (sign == 1) ? -1 : 1;
	return (sign * n);
}
