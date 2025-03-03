# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcastrat <mcastrat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 22:09:02 by mcastrat          #+#    #+#              #
#    Updated: 2025/02/07 12:06:10 by mcastrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}
RM = rm -f
CC = gcc -Wall -Wextra -Werror
LIB = ar -rcs
SRCS =	ft_printf.c utils.c utilsputnbr.c

%.o : %.c ft_print.h
	$(CC) -c $< -o $@
$(NAME): ${OBJS}
		${LIB} ${NAME} ${OBJS}
all:	${NAME}
clean:
		${RM} ${OBJS}
fclean:	clean
		${RM} ${NAME}
re:		fclean all

.PHONY: all clean fclean re



