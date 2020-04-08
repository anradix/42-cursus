/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:59:31 by anradix           #+#    #+#             */
/*   Updated: 2020/04/08 20:46:37 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_player
{
	float x;
    float y;
    float width;
    float height;
    int turnDirection; // -1 for left, +1 for right
    int walkDirection; // -1 for back, +1 for front
	int		left_right; // - 1 gauche 1 droite
    float rotationAngle;
    float walkSpeed;
    float turnSpeed;
}	t_player;

typedef struct s_mlx
{
	void	*id;
	void	*win;
	void	*img_id;
	int		*img;
	int		endian;
	int		bpp;
	int		size_line;
	
	int		*textu;
	int		textu_x;
	int		textu_y;
	int		*img_texu;
}	t_mlx;

typedef struct ray
{
    float rayAngle;
    float wallHitX;
    float wallHitY;
    float distance;
    int wasHitVertical;
    int isRayFacingUp;
    int isRayFacingDown;
    int isRayFacingLeft;
    int isRayFacingRight;
    int wallHitContent;
	int i;
} t_rays[NUM_RAYS];

typedef struct s_struct
{
	t_mlx		mlx;
	t_player	player;
	t_rays		*rays;
}	t_struct;

#endif
