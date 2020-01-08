/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:16:25 by anradix           #+#    #+#             */
/*   Updated: 2020/01/08 15:11:17 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		main(int ac, char **av)
{
	t_game		g_ptr;
	t_window	w_ptr;
	t_mlx		m_ptr;

	parsing(av[1], &g_ptr, &w_ptr);
	run_game(&g_ptr, &w_ptr, &m_ptr);
	return (0);
}
