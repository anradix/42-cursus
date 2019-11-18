/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tensdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 16:42:42 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:29:58 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_tensdel() function free a 3d array.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_tensdel(void ***tab)
{
	int i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			ft_tabdel(tab[i]);
			i++;
		}
		free(tab);
	}
}
