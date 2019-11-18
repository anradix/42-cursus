/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 16:15:20 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 16:06:56 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_putstr() function outputs the string s.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putstr(char const *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}
