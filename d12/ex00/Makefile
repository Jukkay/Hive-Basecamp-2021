# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 08:18:39 by jylimaul          #+#    #+#              #
#    Updated: 2021/07/22 15:38:35 by jylimaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = main.c ft_display_file.c ft_input_check.c
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
