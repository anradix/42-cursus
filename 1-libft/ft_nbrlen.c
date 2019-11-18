/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 17:14:39 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 15:59:56 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_nbrlen() functon returns the len of nb.
*/

#include "libft.h"

size_t		ft_nbrlen(int nb)
{
	return (ft_nbrlen_base(nb, 10));
}
