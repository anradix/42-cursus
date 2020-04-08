/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:37:18 by anradix           #+#    #+#             */
/*   Updated: 2020/04/08 03:38:24 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		key_press(int key, t_struct *s)
{
	if  (key == 53)
		exit (EXIT_SUCCESS);
	if (key == W_KEY)
		s->player.walkDirection = +1;
	if (key == S_KEY)
        s->player.walkDirection = -1;
	if (key == D_KEY)
        s->player.walkDirection = +2;
	if (key == A_KEY)
        s->player.walkDirection = -2;
	if (key == ARROW_RIGH)
        s->player.turnDirection = +1;
	if (key == ARROW_LEFT)
        s->player.turnDirection = -1;
	game_loop(*s);
	return 0;
}

int		key_release(int key, t_struct *s)
{
	if (key == W_KEY)
        s->player.walkDirection = 0;
	if (key == S_KEY)
        s->player.walkDirection = 0;
	if (key == D_KEY)
        s->player.walkDirection = 0;
	if (key == A_KEY)
        s->player.walkDirection = 0;
	if (key == ARROW_RIGH)
        s->player.turnDirection = 0;
	if (key == ARROW_LEFT)
        s->player.turnDirection = 0;
	game_loop(*s);
	return 0;
}
