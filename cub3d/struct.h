/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:00:51 by anradix           #+#    #+#             */
/*   Updated: 2020/02/04 19:47:47 by anradix          ###   ########.fr       */
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


typedef struct s_mini_map
{
	int box_size;
	int	height;
	int	width;
}	mini_map_strct;

typedef struct s_mlx
{
	void *mlx_init;
	void *win;
	int color;
	int bits;
	int size_line;
	int endian;
	void *img;
	int	*addr;
}	mlx_strct;

typedef struct s_main
{
	mlx_strct		mlx;
	mini_map_strct	mini_map;
}	main_strct;

#endif
