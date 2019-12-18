/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:17:20 by anradix           #+#    #+#             */
/*   Updated: 2019/12/18 08:31:40 by anradix          ###   ########.fr       */
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
void	run(t_game *gameptr, t_window *winptr);
#endif
