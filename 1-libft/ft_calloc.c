/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:57:24 by anradix           #+#    #+#             */
/*   Updated: 2019/11/06 16:06:59 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_calloc() function allocates memory for an array of nmemb elements
** of size bytes each and returns a pointer to the allocated memory.
** The memory is set to zero. If nmemb or size is 0, then calloc() returns
** either NULL, or a unique pointer value that can later be successfully
** passed to free().
*/

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (!(s = ((char*)malloc(size * nmemb))))
		return (NULL);
	ft_bzero(s, size * nmemb);
	return (s);
}
