/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:16:25 by anradix           #+#    #+#             */
/*   Updated: 2019/12/18 08:46:20 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		main(int ac, char **av)
{
	t_game		gameptr;
	t_window	windowptr;

	(ac == 2 && parsing(av[1])) ? run(&gameptr, &windowptr)
	: write(1, "Usage: ./cub3d [map.cub]\n", 25);
	return (0);
}
