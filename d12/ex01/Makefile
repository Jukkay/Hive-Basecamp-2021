# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 08:18:39 by jylimaul          #+#    #+#              #
#    Updated: 2021/07/22 19:39:56 by jylimaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = main.c ft_display_file.c ft_input_check.c ft_putnbr.c ft_putchar.c
HEADERS = ft_list.h

all: ${NAME}

${NAME}:
	gcc -Wall -Wextra -Werror -o ${NAME} ${SRC}

.PHONY: clean
clean:
	rm -f *.o *.gch

.PHONY: fclean
fclean: clean
	rm -f ${NAME} core a.out

re: fclean all
