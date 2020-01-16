/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:16:58 by anradix           #+#    #+#             */
/*   Updated: 2020/01/16 05:35:54 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT _H

typedef struct s_key
{
	int	esc;
	int	up;
	int	down;
	int	right;
	int	left;
	int	r_right;
	int r_left;
}	t_key;

typedef struct s_mlx
{
	void	*mlx_init;
	void	*win;
	void	*img;
	char	*img_buff;
	int	bpp;
	int	sline;
	int	endian;
}	t_mlx;

typedef	struct s_map
{
	char	*f_map;
	int	height;
	int	width;
	void	*path_wall_n;
	void	*path_wall_s;
	void	*path_wall_e;
	void	*path_wall_w;
	void	*wall_n;
	void	*wall_s;
	void	*wall_e;
	void	*wall_w;
}	t_map;

typedef struct s_main_struct
{
	int ii;
	int jj;
	t_map map;
	t_mlx mlx;
	t_key key;
}	main_struct;

#endif
