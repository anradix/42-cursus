/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 20:43:10 by anradix           #+#    #+#             */
/*   Updated: 2020/03/10 00:09:18 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	setup_struct(t_player *player)
{
	player->x = WINDOW_WIDTH / 2;
    player->y = WINDOW_HEIGHT / 2;
    player->width = 1;
    player->height = 1;
    player->turnDirection = 0;
    player->walkDirection = 0;
    player->rotationAngle = PI / 2;
    player->walkSpeed = 100;
    player->turnSpeed = 45 * (PI / 180);
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

	// TO DELET LATER
	wallTexture = (uint32_t*)malloc(sizeof(uint32_t) * (uint32_t)TEXTURE_WIDTH * (uint32_t)TEXTURE_HEIGHT);

	for (int x = 0; x < TEXTURE_WIDTH; x++)
	{
		for (int y = 0; y < TEXTURE_HEIGHT; y++)
		{
			wallTexture[(TEXTURE_WIDTH * y) + x] = (x % 8 && y % 8) ?  15443079 : 0;
		}
	}

	int a; int b;
	s->mlx.textu = mlx_xpm_file_to_image(s->mlx.id, "file.xpm", &a, &b);

	mlx_destroy_image (s->mlx.id, s->mlx.textu);
}
