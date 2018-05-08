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

NAME = libft.a
HEADERS_PATH = ./includes/
THREE_WITCHES = -Wall -Wextra -Werror
OPTION = -c -I $(HEADERS_PATH)
FILES = libcfcns/ft_atoi.c \
			libcfcns/ft_isascii.c \
			libcfcns/ft_memchr.c \
			libcfcns/ft_memset.c \
			libcfcns/ft_strcpy.c \
			libcfcns/ft_strncat.c \
			libcfcns/ft_strrchr.c \
			libcfcns/ft_bzero.c \
			libcfcns/ft_isdigit.c \
			libcfcns/ft_memcmp.c \
			libcfcns/ft_strcat.c \
			libcfcns/ft_strdup.c \
			libcfcns/ft_strncmp.c \
			libcfcns/ft_strstr.c \
			libcfcns/ft_isalnum.c \
			libcfcns/ft_isprint.c \
			libcfcns/ft_memcpy.c \
			libcfcns/ft_strchr.c \
			libcfcns/ft_strlcat.c \
			libcfcns/ft_strncpy.c \
			libcfcns/ft_tolower.c \
			libcfcns/ft_isalpha.c \
			libcfcns/ft_memccpy.c \
			libcfcns/ft_memmove.c \
			libcfcns/ft_strcmp.c \
			libcfcns/ft_strlen.c \
			libcfcns/ft_strnstr.c \
			libcfcns/ft_toupper.c \
			addfcns/ft_itoa.c \
			addfcns/ft_putchar_fd.c \
			addfcns/ft_putnbr_fd.c \
			addfcns/ft_strdel.c \
			addfcns/ft_strjoin.c \
			addfcns/ft_strnew.c \
			addfcns/ft_memalloc.c \
			addfcns/ft_putendl.c \
			addfcns/ft_putstr.c \
			addfcns/ft_strequ.c \
			addfcns/ft_strmap.c \
			addfcns/ft_strsplit.c \
			addfcns/ft_memdel.c \
			addfcns/ft_putendl_fd.c \
			addfcns/ft_putstr_fd.c \
			addfcns/ft_striter.c \
			addfcns/ft_strmapi.c \
			addfcns/ft_strsub.c \
			addfcns/ft_putchar.c \
			addfcns/ft_putnbr.c \
			addfcns/ft_strclr.c \
			addfcns/ft_striteri.c \
			addfcns/ft_strnequ.c \
			addfcns/ft_strtrim.c \
			bonusfcns/ft_lstadd.c \
			bonusfcns/ft_lstdel.c \
			bonusfcns/ft_lstdelone.c \
			bonusfcns/ft_lstiter.c \
			bonusfcns/ft_lstmap.c \
			bonusfcns/ft_lstnew.c
OBJ = 

all: $(NAME)

$(NAME):
	gcc $(THREE_WITCHES) $(OPTION) $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

