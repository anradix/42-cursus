/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:31:07 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:12:43 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_atoi() function converts the initial portion of the string pointed
** to by nptr to int.
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
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
	{
		return (sign == 1) ? -1 : 1;
	}
	return (sign * n);
}
