/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 23:09:32 by anradix           #+#    #+#             */
/*   Updated: 2019/12/15 21:47:48 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	create_window(t_struct *p)
{
		if (!(p->mlx = mlx_init()))
			return (0);
		if (!(p->win = mlx_new_window(p->mlx, p->win_x, p->win_y, "cub3d")))
			return (0);
		return (1);
}
