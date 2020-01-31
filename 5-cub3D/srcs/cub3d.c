/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 06:55:23 by anradix           #+#    #+#             */
/*   Updated: 2020/01/27 06:59:07 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		error(int value)
{
	printf("Error\n");
	if (value == WRONG_ARGS)
		printf("Usage ./cub3d [map.cub]\n");
	else if (value == CANNOT_IMPORT_MAP)
		printf("Cannot import map\n");
	else if (value == MAP_ERROR)
		printf("Format of file.cub look like incorrect\n");
	else if (value == MLX_FAIL)
		printf("MLX function did'nt work\n");
	return (EXIT_FAILURE);
}

int		main(int ac, char **av)
{
	main_strct	m_ptr;
	int			ret;

	ret = 0;
	if (ac != 2 || (ret = parsing(av[1], &m_ptr)) != 1)
		return (error(ret));
	ret = run(&m_ptr);
	return (ret != 1) ? error(ret) : EXIT_SUCCESS;
}
