/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:53:25 by anradix           #+#    #+#             */
/*   Updated: 2019/11/18 17:09:12 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#ifndef BUFF_SIZE
# define BUFF_SIZE 42
#endif

# include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

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

#endif
