/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 02:15:13 by anradix           #+#    #+#             */
/*   Updated: 2019/12/08 23:44:55 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "mlx.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct	s_struct
{
	void	*mlx;
	void	*win;
	int		state;
}	t_struct;

bool	parse_args(t_struct *p, char **av);
bool	create_window(t_struct *p);
int		exit_error(int n);

#endif
