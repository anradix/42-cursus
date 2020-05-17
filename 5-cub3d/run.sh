




cc -I headers -I mlx -I mylib/header srcs/*.c srcs/draw/*.c srcs/utils/*.c srcs/render/*.c srcs/setup/*.c mylib/mylib.a -L mlx  -lmlx -framework OpenGL -framework AppKit -o cub3d && ./cub3d map.cub
