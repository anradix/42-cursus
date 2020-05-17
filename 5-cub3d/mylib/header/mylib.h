/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:48:15 by anradix           #+#    #+#             */
/*   Updated: 2020/02/19 20:10:54 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_H
# define MYLIB_H

#ifndef BUFF_SIZE
# define BUFF_SIZE 100
#endif

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
int		*m_alloc(size_t size, int c);
void	m_free_tab(int **tab, size_t x);
int		*m_set(int *s, int c, size_t size);
int		**m_tab(size_t x, size_t y, int c);
void	m_zero(void *s, size_t size);

/*
** string
*/
char	*s_cat(char *dst, char *src);
bool	s_diff(const char *s1, const char *s2);
char	*s_join(char *s1, char *s2);
size_t	s_len(const char *s, size_t len, char c);
char	*s_new(size_t size);
char	**s_split(char const *s, char c);

#endif
