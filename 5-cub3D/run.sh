cc -I mlx -I includes -I srcs/lib/header srcs/*.c srcs/lib/lib.a -L mlx  -lmlx -framework OpenGL -framework AppKit -o cub3d && ./cub3d maps/valid/Basic_01.cub
