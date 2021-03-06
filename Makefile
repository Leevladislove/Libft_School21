# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdiglett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 18:54:59 by sdiglett          #+#    #+#              #
#    Updated: 2021/10/22 18:59:11 by sdiglett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

LIST	= ft_isalpha.c		ft_isdigit.c		ft_isalnum.c\
		    ft_isascii.c 		ft_isprint.c		ft_strlen.c\
		    ft_memset.c			ft_bzero.c			ft_memmove.c\
		    ft_strlcpy.c		ft_strlcat.c		ft_toupper.c\
		    ft_tolower.c		ft_strchr.c			ft_strrchr.c\
		    ft_strncmp.c		ft_memchr.c			ft_memcmp.c\
        ft_strnstr.c		ft_atoi.c			  ft_calloc.c\
        ft_strdup.c			ft_substr.c			ft_strjoin.c\
        ft_strtrim.c		ft_split.c			ft_itoa.c\
        ft_strmapi.c		ft_striteri.c		ft_putchar_fd.c\
		    ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c\
        ft_memcpy.c


OBJ	= $(patsubst %.c,%.o,$(LIST))

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

all	:	$(NAME)

HEADER 	= 	libft.h

$(NAME)	:	$(OBJ)
		ar rcs $(NAME) $?

%.o	:	%.c
		gcc $(FLAGS) -c $< -o $@


.PHONY	: 	all clean fclean re


clean	:
		rm -f $(OBJ)

fclean	:	clean 
			rm -f $(NAME)

re	:	fclean all
