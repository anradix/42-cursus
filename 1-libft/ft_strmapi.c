/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:57:35 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:21:07 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strmapi() a pplies the function f to each character ofthe string
** passed as argument to ** create a newstring (with malloc(3)) resulting from
** successive applications of f.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			i;

	if (!s || !f)
		return (NULL);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
