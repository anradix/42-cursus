/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tensor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 16:58:14 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:13:29 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_init_tensor() function allocates a 3d array size z by x by y bytes
** and the memory is initialized by c.
*/

#include "libft.h"
#include <stdlib.h>

void	***ft_init_tensor(size_t z, size_t x, size_t y, char c)
{
	char	***tab;
	size_t	i;

	i = 0;
	if (!(tab = (char ***)malloc(sizeof(char **) * z + 1)))
		return (NULL);
	while (i < z)
	{
		if (!(((void**)tab)[i] = ft_init_tab(x, y, c)))
			return (NULL);
		i++;
	}
	tab[i] = NULL;
	return ((void***)tab);
}
