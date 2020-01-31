cc -I mlx -I headers -I lib/header srcs/*.c lib/mylib.a -L mlx  -lmlx -framework OpenGL -framework AppKit -o cub3d && ./cub3d map.cub
