/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 16:28:14 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:20:23 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strdlen() function returns the distance that separates it from the
** delimiter d or '\ 0'.
*/

int		ft_strdlen(char const *s, char d)
{
	size_t i;

	i = 0;
	while (*s && *s != d)
	{
		s++;
		i++;
	}
	return (i);
}
