/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_join.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 07:38:47 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 08:06:54 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*s_join(char *s1, char *s2)
{
	char *str;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = s_new((s_len(s1, 0, '\0') + s_len(s2, 0 ,'\0')))))
		return (NULL);
	s_cat(str, s1);
	s_cat(str, s2);
	return (str);
}
