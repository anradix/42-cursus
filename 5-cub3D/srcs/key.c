/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:08:51 by anradix           #+#    #+#             */
/*   Updated: 2020/01/08 17:26:25 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		key_press(int key, main_struct *s_ptr)
{
	if  (key == 53)
		exit (EXIT_SUCCESS);
	return (1);
}

int		key_release(int key, main_struct *s_ptr)
{
	return (1);
}
