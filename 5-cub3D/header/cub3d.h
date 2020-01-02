/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:17:20 by anradix           #+#    #+#             */
/*   Updated: 2020/01/02 14:44:09 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <fcntl.h>
# include "mlx.h"

# include <stdio.h>
# include "lib.h"

#ifndef BUFF_SIZE
# define BUFF_SIZE 100
#endif

typedef struct s_game
{
	char	floor_color[4];
	char	ceiling_color[4];
	char	*map;
	int		tmp;
}			t_game;

typedef struct s_window
{
	void	*mlx_ptr;
	void	*mlx_win;
	int		height;
	int		width;
}			t_window;

bool	parsing(const char *map, t_game *gameptr, t_window *windowptr);
char	*get_map(const char *map);
bool	get_map_infos(t_game *gameptr, t_window *windowptr, char *map);
bool	init_env(t_game *gameptr, t_window *windowptr);
bool	test_mlx(t_game *gameptr, t_window *windowptr);
#endif
