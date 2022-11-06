# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccasadem <ccasadem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 10:27:05 by ccasadem          #+#    #+#              #
#    Updated: 2022/11/05 20:50:34 by carles           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strlen.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_memchr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

OBJS =		${SRCS:.c=.o}
DEPS =		${SRC:.c=.d}

HEADER =	libft.h

NAME =		libft.a

CC =		gcc

RM =		rm -f

CFLAGS =	-Wall -Wextra -Werror

.%.o : %.c
			${CC} ${CFLAGS} -c $< -o$@

all :		${NAME}

-include $(DEPS)
${NAME} :	${OBJS} ${HEADER}
			ar rcs ${NAME} ${OBJS}

clean :
			${RM} ${OBJS} 
			${RM} ${DEPS}

fclean :	clean
			${RM} ${NAME}

re :		fclean all

.PHONY :	all clean fclean re
