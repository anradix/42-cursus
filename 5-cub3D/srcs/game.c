/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:28:45 by anradix           #+#    #+#             */
/*   Updated: 2020/01/08 19:20:04 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

// penser a proteger si la texture n'a pas ete trouvee
void	get_textures(main_struct *s_ptr)
{
	int h;
	int w;

	s_ptr->map.wall_n = mlx_xpm_file_to_image(s_ptr->mlx.mlx_init, s_ptr->map.path_wall_n, &h, &w);
	s_ptr->map.wall_n = mlx_get_data_addr(s_ptr->map.wall_n, &s_ptr->mlx.bpp, &s_ptr->mlx.sline, &s_ptr->mlx.endian);
	s_ptr->map.wall_s = mlx_xpm_file_to_image(s_ptr->mlx.mlx_init, s_ptr->map.path_wall_s, &h, &w);
	s_ptr->map.wall_s = mlx_get_data_addr(s_ptr->map.wall_s, &s_ptr->mlx.bpp, &s_ptr->mlx.sline, &s_ptr->mlx.endian);
	s_ptr->map.wall_e = mlx_xpm_file_to_image(s_ptr->mlx.mlx_init, s_ptr->map.path_wall_e, &h, &w);
	s_ptr->map.wall_e = mlx_get_data_addr(s_ptr->map.wall_e, &s_ptr->mlx.bpp, &s_ptr->mlx.sline, &s_ptr->mlx.endian);
	s_ptr->map.wall_w = mlx_xpm_file_to_image(s_ptr->mlx.mlx_init, s_ptr->map.path_wall_w, &h, &w);
	s_ptr->map.wall_w = mlx_get_data_addr(s_ptr->map.wall_w, &s_ptr->mlx.bpp, &s_ptr->mlx.sline, &s_ptr->mlx.endian);
}

int		update_win()
{
	return (0);
}

bool	run_game(main_struct *s_ptr)
{
	s_ptr->mlx.mlx_init = mlx_init();

	s_ptr->mlx.win = mlx_new_window(s_ptr->mlx.mlx_init, s_ptr->map.height, s_ptr->map.width,
	"cub3d - anradix");
	s_ptr->mlx.img = mlx_new_image(s_ptr->mlx.mlx_init, s_ptr->map.height, s_ptr->map.width);
	s_ptr->mlx.img_buff = mlx_get_data_addr(s_ptr->mlx.img, &s_ptr->mlx.bpp, &s_ptr->mlx.sline, &s_ptr->mlx.endian);
	get_textures(s_ptr);
	mlx_hook(s_ptr->mlx.win, 2, 0, key_press, s_ptr);
	mlx_hook(s_ptr->mlx.win, 3, 0, key_release, s_ptr);
	mlx_loop_hook(s_ptr->mlx.mlx_init, update_win, s_ptr);
	mlx_loop(s_ptr->mlx.mlx_init);
	return (0);
}
