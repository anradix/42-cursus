/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:17:20 by anradix           #+#    #+#             */
/*   Updated: 2020/01/08 15:15:37 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <fcntl.h>
# include "mlx.h"
# include "lib.h"

# include <stdio.h>

#ifndef BUFF_SIZE
# define BUFF_SIZE 100
#endif

typedef struct s_game
{
	char	*map;
	int		esc;
}			t_game;

typedef struct s_window
{
	int		height;
	int		width;
}			t_window;

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*img_buff;
	int		bpp;
	int		sline;
	int		endian;
	// textures
	void	*wall_n;
	void	*wall_s;
	void	*wall_e;
	void	*wall_w;
}			t_mlx;

bool parsing(const char *map_path, t_game *g_ptr, t_window *w_ptr);
char	*get_map(const char *map);
bool	get_map_infos(const char *map, t_game *g_ptr, t_window *w_ptr);
bool	run_game(t_game *g_ptr, t_window *w_ptr, t_mlx *m_ptr);

/* Key */
int		key_press(int key, t_game *g_ptr);
int		key_release(int key, t_game *g_ptr);
#endif
