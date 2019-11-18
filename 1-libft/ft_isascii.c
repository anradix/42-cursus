/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:40:17 by anradix           #+#    #+#             */
/*   Updated: 2019/11/05 11:40:29 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isascii() funciton checks whether c is a 7-bit unsigned char value
** that fits into the ASCII character set.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127) ? 1 : 0);
}
