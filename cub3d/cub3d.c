/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:49:39 by anradix           #+#    #+#             */
/*   Updated: 2020/02/03 17:17:40 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		main(int ac, char **av)
{
	main_strct m_ptr;

	if (!(get_map(av[1], &m_ptr)))
		printf("Error\nCan't import file.cub\n");
	if (!(game_loop(&m_ptr)))
		printf("Error\nGame crash");
	return (1);
}
