/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:35:53 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:31:47 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memalloc() function allocates (with malloc(3)) size byte and set the
** memory as 0.
*/

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char *s;

	if (!(s = (char*)malloc(sizeof(char*) * size + 1)))
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
