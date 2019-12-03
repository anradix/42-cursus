/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:06:04 by anradix           #+#    #+#             */
/*   Updated: 2019/12/03 19:31:17 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube_3d.h"

//compile w/ cc -I /usr/local/include main.c -L /usr/local/lib -lmlx -framework OpenGL -framework AppKit

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
	//	mlx_destroy_window(p->mlx_ptr, p->win_ptr);
		exit(0);
	}
	return (0);
}


int		main(int ac, char **av)
{
	t_struct p;
	/////////////////////////////////
	p.mlx_ptr = mlx_init();
	if (p.mlx_ptr == NULL)
		return (1);
	////////////////////////////////
	p.win_ptr = mlx_new_window(p.mlx_ptr, 500, 500, "TEST");
	if (p.win_ptr == NULL)
		return (1);
	///////////////////////////////
	mlx_key_hook(p.win_ptr, deal_key, (void*)0);
	mlx_loop_hook(p.mlx_ptr, endop, (void*)0);
	mlx_loop(p.mlx_ptr);
	return (0);
}
