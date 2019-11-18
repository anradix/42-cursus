/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:53:25 by anradix           #+#    #+#             */
/*   Updated: 2019/11/18 19:01:13 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#ifndef BUFF_SIZE
# define BUFF_SIZE 42
#endif

# define SPACE	(1 << 0)
# define MINUS	(1 << 1)
# define PLUS	(1 << 2)
# define HASH	(1 << 3)
# define ZERO	(1 << 4)
# define L		(1 << 5)
# define H		(1 << 6)
# define HH		(1 << 7)
# define J		(1 << 8)
# define Z		(1 << 9)
# define FL		(1 << 11)

typedef struct	s_struct
{
	char		*frmt;
	char		buff[BUFF_SIZE];
	va_list		va;
	bool		neg;
	bool		tmp;
	int			flags;
	int			i;
	int			len;
	int			precision;
	int			min_len;
	int			base;
}				t_printf;


int		ft_printf(const char *format, ...);
void	init_struct(t_printf *p, bool b);
void	n_buffer(t_printf *p, char c, size_t n);
void	s_buffer(t_printf *p, char *s, size_t n);
void	stock_error(t_printf *p);
void	parsing(t_printf *p);
void	get_flags(t_printf *p);
void	get_type(t_printf *p);
int		check_zero(t_printf *p, int len);
int		check_plus(t_printf *p, int len, int prec);
void	padding(t_printf *p, int prec, int len, uintmax_t nb);

void	stock_d(t_printf *p, uintmax_t nb);

size_t	c_nbrlen(int nb, int base, size_t len);
char	*c_itoa(t_printf *p, uintmax_t nb, size_t len, char c);
#endif
