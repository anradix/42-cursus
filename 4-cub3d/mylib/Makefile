# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anradix <anradix@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 11:35:13 by anradix           #+#    #+#              #
#    Updated: 2020/02/10 14:47:10 by anradix          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: $(NAME)
.PHONY: clean
.PHONY: fclean
.PHONY: re

NAME		= 	mylib.a

CC			= 	gcc
FLAGS		= 	-Wall -Wextra -Werror

HEADER		=	header

CONV		=	srcs/conversion
IMP			=	srcs/import
MEM			=	srcs/memory
STR			=	srcs/string

SOURCES		=	

SOURCES		=	$(CONV)/c_atoi.c\
				$(CONV)/c_itoa.c\
				$(CONV)/c_nbrlen.c\
				$(IMP)/i_file.c\
				$(MEM)/m_alloc.c\
				$(MEM)/m_free_tab.c\
				$(MEM)/m_set.c\
				$(MEM)/m_tab.c\
				$(MEM)/m_zero.c\
				$(STR)/s_cat.c\
				$(STR)/s_diff.c\
				$(STR)/s_join.c\
				$(STR)/s_len.c\
				$(STR)/s_new.c\
				$(STR)/s_split.c\

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
	@rm -f $(OBJ)
