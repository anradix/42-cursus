/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:02:20 by anradix           #+#    #+#             */
/*   Updated: 2019/11/07 15:40:53 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_itoa() function allocates (with malloc(3)) and returns a string
** representing the integer received as an argument. Negative numbers must be
** handled.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		size;
	int		tmp;
	char	*str;

	size = n < 0 ? 2 : 1;
	tmp = n;
	while (tmp /= 10)
		size++;
	if (!(str = (char*)malloc(sizeof(char) * ((size + 1)))))
		return (NULL);
	ft_bzero(str, size + 1);
	tmp = n;
	while (size--)
	{
		str[size] = (n < 0 ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	if (tmp < 0)
		str[0] = '-';
	return (str);
}
