/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:19:50 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 04:03:43 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		count_sprites(main_struct *s_ptr)
{
	int n_sprite;
	int j;

	n_sprite = 0;
	j = 0;
	while (s_ptr->map.f_map[j])
	{
			if (s_ptr->map.f_map[j] == '2')
				n_sprite++;
			j++;
	}
	return (n_sprite);
}

void	check_sprite(main_struct *s_ptr, int i)
{
}

void	parse_sprite(main_struct *s_ptr)
{
	int i;

	i = 0;
	while (s_ptr->map.f_map[i])
	{
		if (s_ptr->map.f_map[i] == '2')
			check_sprite(s_ptr, i);
		i++;
	}
}

void	check_sprites(main_struct *s_ptr)
{
	int n_sprite;

	n_sprite = count_sprites(s_ptr);
	parse_sprite(s_ptr);
}
