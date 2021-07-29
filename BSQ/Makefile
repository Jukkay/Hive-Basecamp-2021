# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 13:44:30 by jumanner          #+#    #+#              #
#    Updated: 2021/07/28 18:40:18 by jumanner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=bsq
SRCS=./srcs/bsq.c ./srcs/solver.c ./srcs/print_solution.c ./srcs/map_legend.c \
	./srcs/read_files.c ./srcs/helpers.c ./srcs/ft_atoi.c ./srcs/ft_strlen.c \
	./srcs/list_helpers.c ./srcs/cursor_helpers.c ./srcs/read_stdin.c \
	./srcs/read_error_checks.c

INCLUDES=./includes

.PHONY: all clean fclean re 

all: $(NAME)
	
$(NAME):
	gcc -Wall -Wextra -Werror -I $(INCLUDES) -o $(NAME) $(SRCS)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
