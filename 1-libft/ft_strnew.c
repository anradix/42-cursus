/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:41:28 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:33:57 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** The ft_strnew() function allocates (with malloc(3)) a char*
** size byte and set the memory as '\0'.
*/

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * ((size + 1)))))
		return (NULL);
	size++;
	while (size--)
		str[size] = '\0';
	return (str);
}
