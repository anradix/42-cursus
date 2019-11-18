/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:42:28 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:24:57 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strtrim() function allocates (with malloc(3)) and returns a copy
** ofthe string given as argument without the charactersspecified in the set
** argument at the beginning andthe end of the string.
*/

#include "libft.h"
#include <stdlib.h>

static int	is_set(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*s2;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	while (set && is_set(s1[i], (char *)set))
		i++;
	if (s1[i] == '\0')
		return (ft_calloc(1, 1));
	j = ft_strlen(s1) - 1;
	while (set && is_set(s1[j], (char *)set))
		j--;
	if (!(s2 = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	while (k < j - i + 1)
	{
		s2[k] = s1[i + k];
		k++;
	}
	s2[k] = '\0';
	return (s2);
}
