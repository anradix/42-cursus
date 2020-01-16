/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:28:45 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 05:36:15 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

// penser a proteger si la texture n'a pas ete trouvee
void	get_textures(main_struct *s_ptr)
{
	int h;
	int w;

	s_ptr->map.wall_n = mlx_xpm_file_to_image(s_ptr->mlx.mlx_init, s_ptr->map.path_wall_n, &h, &w);
	s_ptr->map.wall_s = mlx_xpm_file_to_image(s_ptr->mlx.mlx_init, s_ptr->map.path_wall_s, &h, &w);
	s_ptr->map.wall_e = mlx_xpm_file_to_image(s_ptr->mlx.mlx_init, s_ptr->map.path_wall_e, &h, &w);
	s_ptr->map.wall_w = mlx_xpm_file_to_image(s_ptr->mlx.mlx_init, s_ptr->map.path_wall_w, &h, &w);
}
/* EXPERIMENTATIONS */

void	update_pos(main_struct *s_ptr)
{
	 if (s_ptr->key.up)
		go_up(s_ptr);
	 if (s_ptr->key.down)
		go_down(s_ptr);
	 if (s_ptr->key.right)
		go_right(s_ptr);
	 if (s_ptr->key.left)
		go_left(s_ptr);
	 if (s_ptr->key.r_right)
		rotate_right(s_ptr);
	 if (s_ptr->key.r_left)
		rotate_left(s_ptr);
}

void	update_buffer(main_struct *s_ptr)
{
}

int	update_win(main_struct *s_ptr)
{
	update_pos(s_ptr);
	check_sprites(s_ptr);
	loop_raycast(s_ptr);
	update_buffer(s_ptr);
	mlx_put_image_to_window(s_ptr->mlx.mlx_init, s_ptr->mlx.win, s_ptr->map.wall_w, s_ptr->ii, s_ptr->jj);
	return (0);
}

bool	run_game(main_struct *s_ptr)
{
	s_ptr->mlx.mlx_init = mlx_init();
	int x = 900;
	int y = 500;

	s_ptr->ii = 0;
	s_ptr->jj = 0;
	s_ptr->mlx.win = mlx_new_window(s_ptr->mlx.mlx_init, s_ptr->map.height, s_ptr->map.width,
	"cub3d - anradix");
	s_ptr->mlx.img = mlx_new_image(s_ptr->mlx.mlx_init, s_ptr->map.height, s_ptr->map.width);
	s_ptr->mlx.img_buff = mlx_get_data_addr(s_ptr->mlx.img, &s_ptr->mlx.bpp, &s_ptr->mlx.sline, &s_ptr->mlx.endian);
	get_textures(s_ptr);
	mlx_hook(s_ptr->mlx.win, 2, 0, key_press, s_ptr);
	mlx_loop_hook(s_ptr->mlx.mlx_init, update_win, s_ptr);
	mlx_loop(s_ptr->mlx.mlx_init);
	return (0);
}
