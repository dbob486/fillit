# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kilkim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/20 20:44:32 by kilkim            #+#    #+#              #
#    Updated: 2019/08/21 21:49:17 by kilkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

INC =  srcs/fillit.h

SRC = srcs/board.c srcs/fillit.c srcs/free.c srcs/get_map_size.c \
	  srcs/is_valid.c srcs/need_for_link.c srcs/node_link.c

OBJ = *.o

all: $(NAME)

FLAGS = -Wall -Wextra -Werror

$(NAME):
		@make -C libft
		@gcc $(FLAGS) -I $(INC) -c $(SRC)
		@gcc $(OBJ) -L libft/ -lft -o $(NAME)

clean:
		@make -C libft/ clean
		@rm -f $(OBJ)

fclean: clean
		@make -C libft/ fclean
		@rm -f $(NAME)

re: fclean all
