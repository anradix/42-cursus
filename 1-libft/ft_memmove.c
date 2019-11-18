/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:38:27 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:37:04 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memmove() function copies n bytes from memory area src to memory
** area dest. The memory areas may overlap: copying takes place as
** though the bytes in src are first copied into a temporary array that
** does not overlap src or dest, and the bytes are then copied from the
** temporary array to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = src;
	d = dest;
	if (d == s)
		return (dest);
	if (s < d)
		ft_memcpy(d, s, n);
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
