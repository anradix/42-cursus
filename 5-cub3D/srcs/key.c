/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:08:51 by anradix           #+#    #+#             */
/*   Updated: 2020/01/08 15:18:02 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		key_press(int key, t_game *g_ptr)
{
	if  (key == 53)
		exit (EXIT_SUCCESS);
	return (1);
}

int		key_release(int kry, t_game *g_ptr)
{
	return (1);
}
