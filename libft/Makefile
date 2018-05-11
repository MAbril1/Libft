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
			personalfcns/ft_isspace.c
#			bonusfcns/ft_lstadd.c \
#			bonusfcns/ft_lstdel.c \
#			bonusfcns/ft_lstdelone.c \
#			bonusfcns/ft_lstiter.c \
#			bonusfcns/ft_lstmap.c \
#			bonusfcns/ft_lstnew.c \

OBJ = ft_atoi.o \
			ft_isascii.o \
			ft_memchr.o \
			ft_memset.o \
			ft_strcpy.o \
			ft_strncat.o \
			ft_strrchr.o \
			ft_bzero.o \
			ft_isdigit.o \
			ft_memcmp.o \
			ft_strcat.o \
			ft_strdup.o \
			ft_strncmp.o \
			ft_strstr.o \
			ft_isalnum.o \
			ft_isprint.o \
			ft_memcpy.o \
			ft_strchr.o \
			ft_strlcat.o \
			ft_strncpy.o \
			ft_tolower.o \
			ft_isalpha.o \
			ft_memccpy.o \
			ft_memmove.o \
			ft_strcmp.o \
			ft_strlen.o \
			ft_strnstr.o \
			ft_toupper.o \
			ft_itoa.o \
			ft_putchar_fd.o \
			ft_putnbr_fd.o \
			ft_strdel.o \
			ft_strjoin.o \
			ft_strnew.o \
			ft_memalloc.o \
			ft_putendl.o \
			ft_putstr.o \
			ft_strequ.o \
			ft_strmap.o \
			ft_strsplit.o \
			ft_memdel.o \
			ft_putendl_fd.o \
			ft_putstr_fd.o \
			ft_striter.o \
			ft_strmapi.o \
			ft_strsub.o \
			ft_putchar.o \
			ft_putnbr.o \
			ft_strclr.o \
			ft_striteri.o \
			ft_strnequ.o \
			ft_strtrim.o \
			ft_isspace.o
	#		ft_lstadd.o \
	#		ft_lstdel.o \
	#		ft_lstdelone.o \
	#		ft_lstiter.o \
	#		ft_lstmap.o \
	#		ft_lstnew.o 

all: $(NAME)

$(NAME): 
	gcc $(THREE_WITCHES) $(OPTION) $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
