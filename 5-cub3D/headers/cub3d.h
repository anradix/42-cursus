/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 06:58:28 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 09:09:17 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "mylib.h"
# include "define.h"
# include "struct.h"
# include "mlx.h"
# include <stdlib.h>

#include <stdio.h>

int		parsing(const char *file_path, main_strct *m_ptr);
int		run(main_strct *m_ptr);

#endif 