/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:17:20 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 04:17:34 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

#ifndef BUFF_SIZE
# define BUFF_SIZE 100
#endif

# define ESC 53
# define W 13
# define S 1
# define A 0
# define D 2
# define ARROW_R 124
# define ARROW_L 123

# include "struct.h"
# include "lib.h"
# include "mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <fcntl.h>

# include <stdio.h>

// PARSING
bool	parsing(const char *map_path, main_struct *s_ptr);
char	*get_map(const char *map);
bool	get_map_infos(main_struct *s_ptr);

// GAME
bool	run_game(main_struct *s_ptr);
int	key_press(int key, main_struct *s_ptr);
int	key_release(int key, main_struct *s_ptr);

// MOVE
void	go_up(main_struct *s_ptr);
void	go_down(main_struct *s_ptr);
void	go_right(main_struct *s_ptr);
void	go_left(main_struct *s_ptr);
void	rotate_right(main_struct *s_ptr);
void	rotate_left(main_struct *s_ptr);

// SPRITE 
void	check_sprites(main_struct *s_ptr);

//RAYCAST
int		loop_raycast(main_struct *s_ptr);
#endif
