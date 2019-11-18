/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:39:54 by anradix           #+#    #+#             */
/*   Updated: 2019/11/05 11:39:59 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isprint() function checks for any printable character including space.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= ' ' && c <= '~') ? 1 : 0);
}
