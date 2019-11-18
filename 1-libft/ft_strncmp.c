/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:37:58 by anradix           #+#    #+#             */
/*   Updated: 2019/11/05 11:49:28 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strncmp() function compares the first (at most) n bytes of s1 and s2.
** It returns an integer less than, equal to, or greater than zero if s1 is
** found, respectively, to be less than, to match, or be greater than s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
