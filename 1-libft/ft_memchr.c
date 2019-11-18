/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:39:03 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 15:51:42 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memchr() function scans the initial n bytes of the memory area pointed
** to by s for the first instance of c. Both c and the bytes of the memory area
** pointed to by s are interpreted as unsigned char.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((const char*)s)[i] == (const char)c)
			return ((void*)s + i);
		i++;
	}
	return (NULL);
}
