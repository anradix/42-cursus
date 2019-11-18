/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 16:46:26 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:29:20 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_tablen() function return the len of a 2d array.
*/

#include "libft.h"

size_t		ft_tablen(char **tab)
{
	unsigned int len;

	len = 0;
	if (!tab)
		return (0);
	while (tab[len])
		len++;
	return (len);
}
