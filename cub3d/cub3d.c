/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:49:39 by anradix           #+#    #+#             */
/*   Updated: 2020/02/05 16:51:27 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	mlx_setup(mlx_strct *mlx)
{
	if (!(mlx->mlx_init = mlx_init()))
		return (0);
	if (!(mlx->win = mlx_new_window(mlx->mlx_init,
	g_windows_width, g_windows_height, "Cub4d - anradix")))
		return (0);
	if (!(mlx->img = mlx_new_image(mlx->mlx_init, g_windows_width, g_windows_height)))
		return (0);
	mlx->addr = (void *)mlx_get_data_addr(mlx->img, &mlx->bits,
	&mlx->size_line, &mlx->endian);
	if (!(mlx->iaddr = (int **)m_tab(100, 100, 0)))
		return (0);
	return (1);
}

int		main(int ac, char **av)
{
	main_strct m_ptr;

	if (!(get_map(av[1], &m_ptr)))
	{
		printf("Error\nCan't import file.cub\n");
		return (0);
	}
	if (!(mlx_setup(&m_ptr.mlx)))
	{
		printf("Error\nmlx error\n");
		return (0);
	}
	if (!(game_loop(&m_ptr)))
		printf("Error\nGame crash");
	return (1);
}
