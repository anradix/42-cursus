/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 05:21:54 by anradix           #+#    #+#             */
/*   Updated: 2019/11/08 12:25:15 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstclear() function deletes and frees the given element and every
** successor of that element, using the function del and free(3).
** Finally, the pointer to the list must be set to NULL.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		del(tmp->content);
		free(tmp);
		tmp = tmp->next;
	}
	*lst = NULL;
}
