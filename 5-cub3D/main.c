/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 02:14:34 by anradix           #+#    #+#             */
/*   Updated: 2019/12/08 23:51:19 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		endop(t_struct *p)
{
		return (0);
}

int		deal_key(int key, void *param, t_struct *p)
{
	p->state = key;
	if (key == 53)
	{
		printf("EXIT\n");
		exit(0);
	}
	return (0);
}

int		main(int ac, char **av)
{
	t_struct	p;
	
	if (!(ac > 1 && parse_args(&p, av + 1)))
			return (exit_error(0));
	create_window(&p);
	mlx_key_hook(p.win, deal_key, (void*)0);
	mlx_loop(p.mlx);
	return (0);
}
