cc -I mlx -I header -I srcs/lib/header srcs/*.c srcs/parsing/*.c srcs/lib/lib.a -L mlx  -lmlx -framework OpenGL -framework AppKit -o cub3d && ./cub3d maps/valid/Basic_01.cub
