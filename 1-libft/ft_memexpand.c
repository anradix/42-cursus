/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memexpand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 13:31:12 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:30:54 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_memxpand() function realloc ptr and add n more byte. The initial
** value of ptrd do not change.
*/

#include "libft.h"
#include <stdlib.h>

void	*ft_memexpand(void *ptr, size_t n)
{
	void	*new_ptr;
	size_t	len;

	len = ft_strlen(ptr);
	if (!(new_ptr = ft_memalloc(len + n)))
		return (NULL);
	ft_memcpy(new_ptr, ptr, len);
	free(ptr);
	return (new_ptr);
}
