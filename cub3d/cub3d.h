/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:51:08 by anradix           #+#    #+#             */
/*   Updated: 2020/02/03 17:32:16 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

#include <stdbool.h>
#include <stdlib.h>
#include "mylib.h"
#include "struct.h"
#include "mlx.h"
//
#include <stdio.h>
//
bool	get_map(const char *file_path, main_strct *m_ptr);
bool	game_loop(main_strct *m_ptr);
int		key_press(int key, main_strct *m_ptr);

#endif
