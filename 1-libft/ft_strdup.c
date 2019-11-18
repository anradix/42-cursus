/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:51:11 by anradix           #+#    #+#             */
/*   Updated: 2019/11/06 16:08:50 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strdup() function returns a pointer to a new string which is a
** duplicate of the string s. Memory for the new string is obtained with
** malloc(3), and can be freed with free(3).
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	if (!(dup = (char*)malloc(sizeof(*s) * (len))))
		return (NULL);
	ft_strlcpy(dup, s, len);
	return (dup);
}
