# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshor <rshor@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 11:57:01 by rshor             #+#    #+#              #
#    Updated: 2022/01/03 15:55:20 by rshor            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= 	libft.a

CC				= 	cc

CFLAGS			= 	-Wall -Wextra -Werror

SRCS			=	ft_isalpha.c			ft_isdigit.c			ft_isalnum.c\
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
					ft_strmapi.c\

SRCS_BONUS		=	ft_lstadd_back_bonus.c	ft_lstadd_front_bonus.c	ft_lstclear_bonus.c\
					ft_lstdelone_bonus.c	ft_lstlast_bonus.c		ft_lstnew_bonus.c\
					ft_lstsize_bonus.c		ft_lstiter_bonus.c		ft_lstmap_bonus.c

OBJ				= 	$(SRCS:.c=.o)

OBJ_BONUS		= 	$(SRCS_BONUS:.c=.o)

HEADER			= 	libft.h

RM				= 	rm -rf

.PHONY: all clean fclean re bonus

all:		${NAME}

bonus:		$(OBJ_BONUS)
			make OBJ="${OBJ_BONUS}" all

%.o:		%.c ${HEADER}
			$(CC) ${CFLAGS} -c $< -o $@

${NAME}:	${OBJ}
			ar rcs ${NAME} ${OBJ}

clean:
			${RM} ${OBJ} ${OBJ_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all