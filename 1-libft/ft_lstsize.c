/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 05:33:38 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 15:48:42 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstsize() function counts the number of elements int a list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	if (!lst)
		return (0);
	n = 0;
	while (lst)
	{
		++n;
		lst = lst->next;
	}
	return (n);
}
