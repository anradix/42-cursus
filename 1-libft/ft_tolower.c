/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:36:51 by anradix           #+#    #+#             */
/*   Updated: 2019/11/05 11:37:22 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_tolower() function convert the letter c to lower case, if possible.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	return ((c >= 65 && c <= 90) ? c + 32 : c);
}
