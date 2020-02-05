/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:41:38 by anradix           #+#    #+#             */
/*   Updated: 2020/02/04 22:08:01 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

bool	render(main_strct *m_ptr)
{
	mlx_put_image_to_window(m_ptr->mlx.mlx_init, m_ptr->mlx.win, m_ptr->mlx.img, 0, 0);
	return (1);
}
