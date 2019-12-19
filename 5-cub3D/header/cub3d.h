/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:17:20 by anradix           #+#    #+#             */
/*   Updated: 2019/12/19 11:51:51 by anradix          ###   ########.fr       */
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

# ifndef BUFF_SIZE
#  define BUFF_SIZE 100
# endif

typedef struct s_game
{
	int		tmp;
}			t_game;

typedef struct s_window
{
	int		height;
	int		width;
}			t_window;

bool	parsing(const char *arg);
char	*get_file(const char *arg);
bool	get_map_info(const char *file);
bool	get_map(const char *file, size_t i);
void	run(t_game *gameptr, t_window *winptr);
#endif
