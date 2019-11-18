/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:38:15 by anradix           #+#    #+#             */
/*   Updated: 2019/11/05 11:38:21 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memset() function fills the first n bytes of the memory area pointed
** to by s with the constant byte c.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		((unsigned char*)s)[n] = (unsigned char)c;
	return (s);
}
