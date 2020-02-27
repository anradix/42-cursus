/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:36:12 by anradix           #+#    #+#             */
/*   Updated: 2020/02/27 21:56:52 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <math.h>
# include <limits.h>
# include "constants.h"
# include "struct.h"
# include "mylib.h"
# include "mlx.h"

int	map[MAP_NUM_ROWS][MAP_NUM_COLS];

void	setup(t_struct *s, const char *file_path);
void	game_loop(t_struct s);
void	update(t_struct *s);

int		key_press(int key, t_struct *s);
int		key_release(int key, t_struct *s);


void	cast_all_rays(t_struct *s, t_rays rays);

void	draw_square(int **buffer, size_t posX, size_t posY, size_t tileSize, int color);
void	draw_line(int **buffer, int xdep, int ydep, int xfin, int yfin, int color);
void	buffer_to_image(int **buffer, t_struct s);

void	render(t_struct s);
void	render_player(int **buffer, t_struct s);
void	render_map(int **buffer);
void	render_rays(t_struct *strct, t_rays rays);
# endif
