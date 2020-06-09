/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 20:02:07 by anradix           #+#    #+#             */
/*   Updated: 2020/06/04 19:27:02 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include <stdint.h> 

int		main(int argc, char **argv)
{
	t_struct s;

	parsing(&s, argv[1]);
	return (0);
	setup(&s, argv[1]);
	game_loop(s);
	return (1);
}
