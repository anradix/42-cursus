/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:22:01 by anradix           #+#    #+#             */
/*   Updated: 2019/11/05 11:49:52 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strrchr() function returns a pointer to the last occurrence of the
** character c in the string s.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i-- > 0)
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}
