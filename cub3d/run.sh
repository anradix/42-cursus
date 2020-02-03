cc -I mlx -I mylib/header *.c mylib/mylib.a -L mlx  -lmlx -framework OpenGL -framework AppKit -o cub3d && ./cub3d map1.cub
