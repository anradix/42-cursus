# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anradix <anradix@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 11:35:13 by anradix           #+#    #+#              #
#    Updated: 2020/09/16 20:21:07 by anradix          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: $(NAME)
.PHONY: clean
.PHONY: fclean
.PHONY: re

NAME		= 	mylib.a

CC			= 	gcc
FLAGS		= 	-Wall -Wextra -Werror

HEADER		=	./

CHAR		=	srcs/char
CONV		=	srcs/conversion
IMP			=	srcs/import
MEM			=	srcs/memory
PRINT		=	srcs/print
STR			=	srcs/string

SOURCES		=	

SOURCES		=	$(CONV)/c_atoi.c\
				$(CONV)/c_itoa.c\
				$(CONV)/c_nbrlen.c\
				$(IMP)/i_file.c\
				$(MEM)/m_alloc.c\
				$(MEM)/m_alloc2d.c\
				$(MEM)/m_dup.c\
				$(MEM)/m_free2d.c\
				$(MEM)/m_swap.c\
				$(PRINT)/p_nbr.c\
				$(PRINT)/p_str.c\
				$(PRINT)/p_str2d.c\
				$(STR)/s_cat.c\
				$(STR)/s_copy.c\
				$(STR)/s_copy2d.c\
				$(STR)/s_diff.c\
				$(STR)/s_find.c\
				$(STR)/s_join.c\
				$(STR)/s_len.c\
				$(STR)/s_set.c\
				$(STR)/s_split.c\
				$(STR)/s_trim.c\

OBJS		=	$(SOURCES:.c=.o)

GREEN		=	\033[0;38;5;121m
RED 		=	\033[0;38;5;9m
YELLOW		=	\033[0;38;5;226m

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(GREEN)\nmylib.a has been successfully created"

%.o: %.c
	@echo "$(GREEN).\c"
	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

clean:
	@rm -rf $(OBJS)
	@rm -rf $(OBJS_B)
	@echo "$(YELLOW)mylib clean OK"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)mylib fclean OK"

re: fclean all
	@rm -f $(OBJS)
