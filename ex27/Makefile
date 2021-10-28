# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 10:57:09 by jheiskan          #+#    #+#              #
#    Updated: 2021/10/28 11:45:22 by jheiskan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_putchar.c ft_putstr.c ft_display_file.c

INCL = ./srcs

OBJ = ft_putchar.o ft_putstr.o ft_display_file.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(INCL) $(SRC) -o ft_display_file
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
