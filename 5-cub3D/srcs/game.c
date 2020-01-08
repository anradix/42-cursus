/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:28:45 by anradix           #+#    #+#             */
/*   Updated: 2020/01/08 15:16:43 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

// penser a proteger si la texture n'a pas ete trouvee
void	get_textures(t_mlx *m_ptr)
{
	int h;
	int w;

	m_ptr->wall_n = mlx_xpm_file_to_image(m_ptr->mlx, "./textures/wall_n.xpm", &h, &w);
	m_ptr->wall_n = mlx_get_data_addr(m_ptr->wall_n, &m_ptr->bpp, &m_ptr->sline, &m_ptr->endian);
	// ---
	m_ptr->wall_s = mlx_xpm_file_to_image(m_ptr->mlx, "./textures/wall_s.xpm", &h, &w);
	m_ptr->wall_s = mlx_get_data_addr(m_ptr->wall_s,&m_ptr->bpp, &m_ptr->sline, &m_ptr->endian);
	// ---
	m_ptr->wall_e = mlx_xpm_file_to_image(m_ptr->mlx, "./textures/wall_e.xpm", &h, &w);
	m_ptr->wall_e = mlx_get_data_addr(m_ptr->wall_e, &m_ptr->bpp, &m_ptr->sline, &m_ptr->endian);
	// --
	m_ptr->wall_w = mlx_xpm_file_to_image(m_ptr->mlx, "./textures/wall_w.xpm", &h, &w);
	m_ptr->wall_w = mlx_get_data_addr(m_ptr->wall_w, &m_ptr->bpp, &m_ptr->sline, &m_ptr->endian);
}

bool	run_game(t_game *g_ptr, t_window *w_ptr, t_mlx *m_ptr)
{
	m_ptr->mlx = mlx_init();
	m_ptr->win = mlx_new_window(m_ptr->mlx, w_ptr->height, w_ptr->width,
	"Cub3d - Anradix");
	m_ptr->img = mlx_new_image(m_ptr->mlx, w_ptr->height, w_ptr->width);
	m_ptr->img_buff = mlx_get_data_addr(m_ptr->img, &m_ptr->bpp, &m_ptr->sline, &m_ptr->endian);

	get_textures(m_ptr);
	mlx_hook(m_ptr->win, 2, 0, key_press, g_ptr);
	mlx_hook(m_ptr->win, 3, 0, key_release, m_ptr);
//	mlx_loop_hook(m_ptr->mlx, update_win, m_ptr);
	mlx_loop(m_ptr->mlx);
	return (0);
}
