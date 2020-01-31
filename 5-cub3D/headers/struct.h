/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 07:05:02 by anradix           #+#    #+#             */
/*   Updated: 2020/01/31 11:10:30 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct player_struct
{
}	player_strct;


typedef struct camera_srtuct
{
}	camera_strct;

typedef struct mlx_strcut
{
	void *mlx_init;
	void *win;
	void *img;
	char *img_buff;
}	mlx_strct;

typedef struct map_struct
{
	char *map;
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
	mlx_strct		mlx;
	map_strct		map;
	textures_strct	textures;
	camera_strct	camera;
	player_strct	player;
}	main_strct;

#endif
