# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: altikka <altikka@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/25 13:47:42 by altikka           #+#    #+#              #
#    Updated: 2021/07/25 15:51:01 by altikka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

PATH_SRC = srcs/

SRCS = $(PATH_SRC)main.c $(PATH_SRC)ft_read_stdin.c $(PATH_SRC)ft_height.c \
	$(PATH_SRC)ft_width.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c \
	$(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_putnbr.c \
	$(PATH_SRC)ft_detective_r00.c $(PATH_SRC)ft_detective_r01.c \
	$(PATH_SRC)ft_detective_r02.c $(PATH_SRC)ft_detective_r03.c \
	$(PATH_SRC)ft_detective_r04.c $(PATH_SRC)ft_orig_r00.c \
	$(PATH_SRC)ft_orig_r01.c $(PATH_SRC)ft_orig_r02.c \
	$(PATH_SRC)ft_orig_r03.c $(PATH_SRC)ft_orig_r04.c \
	$(PATH_SRC)ft_print_result.c

INCS = includes/

OBJECTS = main.o ft_read_stdin.o ft_height.o ft_width.o ft_strlen.o ft_strcmp.o \
	ft_putchar.o ft_putstr.o ft_putnbr.o ft_detective_r00.o \
	ft_detective_r01.o ft_detective_r02.o ft_detective_r03.o \
	ft_detective_r04.o ft_orig_r00.o ft_orig_r01.o ft_orig_r02.o \
	ft_orig_r03.o ft_orig_r04.o ft_print_result.o

CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -I$(INCS)
	gcc $(CFLAG) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
