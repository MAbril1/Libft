# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabril <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/16 13:10:06 by mabril            #+#    #+#              #
#    Updated: 2018/04/16 13:11:57 by mabril           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
HEADERS_PATH = ./includes/
THREE_WITCHES = -Wall -Wextra -Werror
OPTION = -c -I $(HEADERS_PATH)
SRC = main.c $(wildcard ./srcs/*.c)
OBJ = main.o $(wildcard ./*.o)

all: $(NAME)

$(NAME):
	gcc $(THREE_WITCHES) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

