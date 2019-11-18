/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:48:55 by anradix           #+#    #+#             */
/*   Updated: 2019/11/18 18:53:49 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_plus(t_printf *p, int len, int prec)
{
	if (p->flags & PLUS)
	{
		n_buffer(p, '+', 1);
		if (len >= p->precision)
			prec -= 1;
	}
	return (prec);
}

int		check_zero(t_printf *p, int len)
{
	int prec;

	if (p->flags & ZERO)
	{
		prec = p->precision ? p->precision - len :
			(p->min_len - len - p->neg);
		if ((p->flags & SPACE) && (p->precision == 0))
			prec -= 1;
	}
	else
		prec = p->precision ? p->precision - len : 0;
	prec = prec < 0 ? 0 : prec;
	return (prec);
}
