/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:53:25 by anradix           #+#    #+#             */
/*   Updated: 2019/11/19 17:03:54 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

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

/*
** parsing
*/
void	parsing(t_printf *p);
void	get_flags(t_printf *p);
void	get_type(t_printf *p);
void	get_base(t_printf *p);

/*
** stock
*/
void	stock_d(t_printf *p, uintmax_t nb);
void	stock_o(t_printf *p, uintmax_t nb);
void	stock_x(t_printf *p, uintmax_t nb);
void	stock_u(t_printf *p, uintmax_t nb);
void	stock_p(t_printf *p, uintmax_t nb);
void	stock_c(t_printf *p, char c);
void	stock_s(t_printf *p, char *s);

/*
** utils
*/
void	init_struct(t_printf *p, bool b);
void	n_buffer(t_printf *p, char c, size_t n);
void	s_buffer(t_printf *p, char *s, size_t n);
void	stock_error(t_printf *p);
int		check_zero(t_printf *p, int len);
int		check_plus(t_printf *p, int len, int prec);
void	stock_hash(t_printf *p);
int		check_hash_o(t_printf *p, int prec);
int		check_hash_x(t_printf *p, int prec, uintmax_t nb);
void	padding(t_printf *p, int prec, int len, uintmax_t nb);
void	u_padding(t_printf *p, int prec, int len, uintmax_t nb);

/*
** lib
*/
int		c_atoi(char *nptr);
char	*c_itoa(t_printf *p, uintmax_t nb, size_t len, char c);
int		c_nbrlen(uintmax_t nb, int base, int len);
bool	is_digit(const char c);
int		s_chr(const char *s, const char c);
int		s_len(char *s, int len, const char c);

#endif
