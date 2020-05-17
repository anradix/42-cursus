/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_nbrlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 21:29:38 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 08:06:10 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

size_t	c_nbrlen(int nb, int base, size_t len)
{
	if (nb == 0 && len == 0)
		return (1);
	if (nb < 0) 
		return (c_nbrlen(nb * -1, base, len + 1));
	return (nb == 0) ? len : c_nbrlen(nb / base, base, len + 1);
}
