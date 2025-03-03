# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcastrat <mcastrat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 15:42:11 by mcastrat          #+#    #+#              #
#    Updated: 2025/02/02 12:20:45 by mcastrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap

PRINTF_DIR  = ft_printf/

CC          = gcc
RM          = rm -f
CFLAGS      = -Wall -Wextra -Werror
PRINTF      = $(PRINTF_DIR)libftprintf.a

SRCS        = ${DIR}main.c ${DIR}initia.c ${DIR}checkutils.c ${DIR}utilsnode.c\
				${DIR}swap.c ${DIR}utilsorta.c ${DIR}push.c ${DIR}reverserotate.c\
				 ${DIR}rotate.c ${DIR}utilsortb.c ${DIR}sort.c ${DIR}utilsort.c\
				 ${DIR}ft_split.c\

OBJS        = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} $(PRINTF)
	${CC} ${CFLAGS} ${OBJS} $(PRINTF) -o ${NAME}

$(PRINTF):
	make -C $(PRINTF_DIR)

all: $(PRINTF) ${NAME}

clean:
	${RM} ${OBJS}
	make clean -C $(PRINTF_DIR)

fclean: clean
	${RM} ${NAME}
	make fclean -C $(PRINTF_DIR)
	
re: fclean all

.PHONY: all clean fclean re