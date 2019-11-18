/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 17:14:39 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:01:33 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_nbrlen_base() function returns the len of nb modify by base.
*/

#include "libft.h"

size_t		ft_nbrlen_base(int nb, int base)
{
	size_t	len;

	len = 0;
	if (base < 2)
		return (0);
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb *= -1;
	while (nb)
	{
		nb /= base;
		len += 1;
	}
	return (len);
}
