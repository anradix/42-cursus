/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tenslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 16:38:26 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:30:32 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_tenslen() function return the len of a 3d array.
*/

#include "libft.h"

size_t		ft_tenslen(char ***tab)
{
	unsigned int len;

	len = 0;
	if (!tab)
		return (0);
	while (tab[len])
		len++;
	return (len);
}
