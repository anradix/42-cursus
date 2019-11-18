/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 05:15:34 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 15:45:26 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstmap() function iterates the list lst and applies the function f
** to the content of each element. Creates a new list resulting of the
** successive applications of the function f.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *new;
	t_list *next;
	t_list *start;

	if (!lst || (!(new = (t_list*)malloc(sizeof(t_list)))))
		return (NULL);
	new->content = f(lst->content);
	start = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(next = (t_list*)malloc(sizeof(t_list))))
			return (0);
		next->content = f(lst->content);
		new->next = next;
		new = new->next;
	}
	new->next = NULL;
	return (start);
}
