/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_3d.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:42:35 by anradix           #+#    #+#             */
/*   Updated: 2019/12/03 19:10:55 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_3D
# define CUBE_3D

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
#include <stdio.h>
# include "mlx.h"

typedef struct s_struct
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		state;
}			t_struct;
#endif
