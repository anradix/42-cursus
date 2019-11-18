/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:24:23 by anradix           #+#    #+#             */
/*   Updated: 2019/11/05 17:04:30 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((i + j < len) && needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
