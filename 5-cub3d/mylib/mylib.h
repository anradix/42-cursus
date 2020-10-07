/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:48:15 by anradix           #+#    #+#             */
/*   Updated: 2020/09/16 20:20:04 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_H
# define MYLIB_H

# ifndef BUFF_SIZE
#  define BUFF_SIZE 100
# endif

# include <string.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <fcntl.h>

/*
** conv
*/
int		c_atoi(const char *nptr);
char	*c_itoa(int nb, int base);
size_t	c_nbrlen(int nb, int base, size_t len);

/*
** import
*/
char	*i_file(const char *file_path);

/*
** mem
*/
char	*m_alloc(size_t n, char c);
char	**m_alloc2d(size_t y, size_t x, char c);
char	*m_dup(const char *s);
void	m_free2d(char **s);
void	m_swap(int *a, int *b);

/*
** print
*/
void	p_nbr(long long nb, int base);
void	p_str(char *s);
void	p_str2d(char **s);

/*
** string
*/
char	*s_cat(char *dst, char *src);
void	s_copy(char *src, char *dst);
void	s_copy2d(char **src, char **dst);
bool	s_diff(const char *s1, const char *s2);
bool	s_find(const char c, char *s);
char	*s_join(char *s1, char *s2);
size_t	s_len(const char *s, size_t len, char c);
void	s_set(char *s, size_t n, char c);
char	**s_split(char *s, char c);
char	*s_trim(char *s, char c);

#endif
