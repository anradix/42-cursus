cc -I mlx -I header -I lib/header srcs/*.c srcs/parsing/*.c lib/lib.a -L mlx  -lmlx -framework OpenGL -framework AppKit -o cub3d && ./cub3d maps/valid/Basic_01.cub
