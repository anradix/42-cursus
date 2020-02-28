/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:42:18 by anradix           #+#    #+#             */
/*   Updated: 2020/02/28 14:25:20 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	render(t_struct s)
{
	int  **buffer;
	int i = WINDOW_HEIGHT;

	buffer = m_tab(WINDOW_WIDTH, WINDOW_HEIGHT, 0);
	render_map(buffer);
	render_player(buffer, s);
	buffer_to_image(buffer, s);
	while (i-- > 0)
		free(buffer[i]);
	mlx_put_image_to_window(s.mlx.id, s.mlx.win, s.mlx.img_id, 0, 0);
}
