/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:24:11 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:33:21 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_itoa_base() function allocates (with malloc(3)) and returns a string
** representing the integer received as an argument. Negative numbers must be
** handled. The base of this number is defined by b.
*/

#include "libft.h"

char	*ft_itoa_base(int nb, int b)
{
	char	*s;
	size_t	len;
	short	sign;

	if (b < 2)
		return (NULL);
	sign = (nb < 0) ? 1 : 0;
	if (nb < 0)
		nb *= -1;
	len = ft_nbrlen_base(nb, b);
	if (!(s = ft_memalloc(len + sign + 1)))
		return (NULL);
	while (len--)
	{
		s[len + sign] = (nb % b < 10) ? nb % b + '0' : nb % b + 'A' - 10;
		nb /= b;
	}
	if (sign == 1)
		s[0] = '-';
	return (s);
}
