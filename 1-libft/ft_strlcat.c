/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:16:29 by anradix           #+#    #+#             */
/*   Updated: 2019/11/06 15:56:14 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strlcat() function appends string src to the end of dst. It will
** append at most dstsize - strlen(dst) - 1 characters. It will then
** NUL-terminate, unless dstsize is 0 or the original dst string was longer
** than dstsize (in practice this should not happen as it means that either
** dstsize is incorrect or that dst is not a proper string).
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (dst[i] && i < size - 1)
		i++;
	len = i;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}
