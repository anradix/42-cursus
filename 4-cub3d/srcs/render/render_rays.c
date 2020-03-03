/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_rays.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:41:44 by anradix           #+#    #+#             */
/*   Updated: 2020/03/02 13:59:26 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cub3d.h"

void	render_rays(int **buffer, t_struct s, t_rays rays)
{
	int i = 0;

	while (i < NUM_RAYS)
	{
		draw_line(buffer,
			(int)((MINIMAP_SCALE_FACTOR * s.player.x)),
			(int)((MINIMAP_SCALE_FACTOR * s.player.y)),
			(int)((MINIMAP_SCALE_FACTOR * rays[i].wallHitX)),
			(int)((MINIMAP_SCALE_FACTOR * rays[i].wallHitY)),
			15418368);
		i++;
	}
}
