/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:37:00 by anradix           #+#    #+#             */
/*   Updated: 2019/11/05 11:37:08 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_toupper() function convert the letter c to upper case, if possible.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c);
}
