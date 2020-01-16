/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 07:05:02 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 18:20:31 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct mlx_strcut
{
	void *mlx_init;
	void *win;
	void *img;
	char *img_buff;
	int bpp;
	int sline;
	int endian;
}	mlx_strct;

typedef struct map_struct
{
	int width;
	int	height;
}	map_strct;

typedef struct textures_struct
{
	void *path_wall_n;	
	void *path_wall_s;	
	void *path_wall_e;	
	void *path_wall_w;	
	void *wall_n;
	void *wall_s;
	void *wall_e;
	void *wall_w;
}	textures_strct;

typedef struct main_struct
{
	int ii;
	int jj;
	mlx_strct mlx;
	map_strct map;
	textures_strct textures;
}	main_strct;

#endif
