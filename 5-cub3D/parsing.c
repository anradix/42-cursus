/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 02:27:11 by anradix           #+#    #+#             */
/*   Updated: 2019/12/15 20:33:35 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	check_map(char *av)
{
	return (1);
}

bool	parse_args(t_struct *p, char **av)
{
	p->win_x = 600;
	p->win_y = 400;
	//parsign a faire	
	check_map(*av);
	return (1);
}
