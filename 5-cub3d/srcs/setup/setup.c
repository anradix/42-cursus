/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 20:43:10 by anradix           #+#    #+#             */
/*   Updated: 2020/04/30 10:12:42 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	setup_struct(t_player *player)
{
	player->x = WINDOW_WIDTH / 2;
    player->y = WINDOW_HEIGHT / 2;
   /* player->turnDirection = 0;
    player->walkDirection = 0;
	player->left_right = 0;*/
    player->rotationAngle = PI / 2;
    player->walkSpeed = 16.000000;
    player->turnSpeed = 0.174533;
}

void	setup_mlx(t_mlx *mlx)
{
	mlx->id = mlx_init();
	mlx->win = mlx_new_window(mlx->id, WINDOW_WIDTH, WINDOW_HEIGHT, "Cub3d - anradix");
	mlx->img_id = mlx_new_image(mlx->id, WINDOW_WIDTH, WINDOW_HEIGHT);
	mlx->img = (void *)mlx_get_data_addr(mlx->img_id, &mlx->bpp, &mlx->size_line, &mlx->endian);
}

void	setup(t_struct *s, const char *file_path)
{
	setup_struct(&s->player);
	setup_mlx(&s->mlx);

	if (!(s->mlx.textu = mlx_xpm_file_to_image(s->mlx.id, "textures/stone.xpm", &s->mlx.textu_x, &s->mlx.textu_y)))
		exit(EXIT_SUCCESS);
	wallTexture[0] = (void *)mlx_get_data_addr(s->mlx.textu, &s->mlx.bpp, &s->mlx.size_line, &s->mlx.endian);
	if (!(s->mlx.textu = mlx_xpm_file_to_image(s->mlx.id, "textures/redbrick.xpm", &s->mlx.textu_x, &s->mlx.textu_y)))
		exit(EXIT_SUCCESS);
	wallTexture[1] = (void *)mlx_get_data_addr(s->mlx.textu, &s->mlx.bpp, &s->mlx.size_line, &s->mlx.endian);

}
