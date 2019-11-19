# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anradix <anradix@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 23:50:37 by anradix           #+#    #+#              #
#    Updated: 2019/10/27 13:59:55 by anradix          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: $(NAME)
.PHONY: clean
.PHONY: fclean
.PHONY: re

NAME		= 	libft.a

CC		= 	gcc
FLAGS		= 	-Wall -Wextra -Werror

DIR_S		= 	srcs
DIR_B		= 	bonus

DIR_O		= 	obj

HEADER		= 	headers

SOURCES		=	ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memmove.c\

SOURCES_B	=	\


SRCS		= 	$(addprefix $(DIR_S)/,$(SOURCES))
SRCS_B		= 	$(addprefix $(DIR_B)/,$(SOURCES_B))

OBJS		=	$(addprefix $(DIR_O)/,$(SOURCES:.c=.o))
OBJS_B		=	$(addprefix $(DIR_O)/,$(SOURCES_B:.c=.o))

GREEN		=	\033[0;38;5;121m
RED 		=	\033[0;38;5;9m
YELLOW		=	\033[0;38;5;226m

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(GREEN)\nlibft.a has been successfully created"

$(DIR_O)/%.o: $(DIR_S)/%.c $(HEADER)/libft.h
	@mkdir -p obj
	@echo "$(GREEN).\c"
	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

$(DIR_O)/%.o: $(DIR_B)/%.c $(HEADER)/libft_bonus.h
	@mkdir -p obj
	@echo "$(GREEN).\c"
	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

clean:
	@rm -rf $(DIR_O)
	@echo "$(YELLOW)libft clean OK"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)libft fclean OK"

re: fclean all

bonus: $(OBJS) $(OBJS_B) $(HEADER)/libft.h $(HEADER)/libft_bonus.h
	@ar rc $(NAME) $(OBJS) $(OBJS_B)
	@echo "$(GREEN)\nlibft.a (with bonus) has been successfully created"


