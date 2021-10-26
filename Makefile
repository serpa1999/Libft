# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshor <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 17:53:18 by rshor             #+#    #+#              #
#    Updated: 2021/10/12 17:53:25 by rshor            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

SRCS	=	ft_isalpha.c			ft_isdigit.c			ft_isalnum.c\
			ft_isascii.c			ft_isprint.c			ft_strlen.c\
			ft_bzero.c				ft_memcpy.c				ft_memmove.c\
			ft_strlcpy.c			ft_strlcat.c			ft_toupper.c\
			ft_tolower.c			ft_strchr.c				ft_strrchr.c\
			ft_strncmp.c			ft_memchr.c				ft_memcmp.c\
			ft_strnstr.c			ft_atoi.c				ft_memset.c\
			ft_calloc.c				ft_strdup.c				ft_putnbr_fd.c\
			ft_substr.c				ft_itoa.c				ft_strjoin.c\
			ft_strtrim.c			ft_putchar_fd.c			ft_putstr_fd.c\
			ft_putendl_fd.c			ft_split.c				ft_striteri.c\
			ft_strmapi.c

OBJ	= $(SRCS:.c=.o)

HEADER	= libft.h

RM		= rm -rf

.PHONY: all clean fclean re

all:		${NAME}

%.o:		%.c ${HEADER}
			$(CC) ${CFLAGS} -c $< -o $@

${NAME}:	${OBJ}
			ar rcs ${NAME} ${OBJ}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all