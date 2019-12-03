/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:06:04 by anradix           #+#    #+#             */
/*   Updated: 2019/12/03 19:14:30 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube_3d.h"

int		endop(t_struct *p)
{
		printf("yoooooooo");
	//	mlx_destroy_window(p->mlx_ptr, p->win_ptr);
		return (0);
}

int		deal_key(int key, void *param, t_struct *p)
{
	printf("%d\n", key);
	return (0);
}


int		main(int ac, char **av)
{
	t_struct p;

	p.mlx_ptr = mlx_init();
	if (p.mlx_ptr == NULL)
		return (1);


	p.win_ptr = mlx_new_window(p.mlx_ptr, 500, 500, "TEST");
	if (p.win_ptr == NULL)
		return (1);


	mlx_key_hook(p.win_ptr, deal_key, (void*)0);
	mlx_loop_hook(p.mlx_ptr, endop, (void*)0);
	mlx_loop(p.mlx_ptr);
	return (0);
}
