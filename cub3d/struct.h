/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:00:51 by anradix           #+#    #+#             */
/*   Updated: 2020/02/03 17:32:43 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

char	**g_map;
size_t	g_windows_height;
size_t	g_windows_width;
size_t	g_map_num_rows;
size_t	g_map_num_cols;
int		g_tile_size;

typedef struct s_mlx
{
	void *mlx_init;
	void *win;
	//void *img;
	//char *img_buff;
	
}	mlx_strct;

typedef struct s_main
{
	mlx_strct mlx;
}	main_strct;

#endif
