# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 15:42:11 by mcastrat          #+#    #+#              #
#    Updated: 2025/01/10 17:21:14 by mcastrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap

PRINTF_DIR  = pprintf/
LIBFT_DIR   = llibft/

CC          = gcc
RM          = rm -f
CFLAGS      = -Wall -Wextra -Werror
PRINTF      = $(PRINTF_DIR)libftprintf.a
LIBFT       = $(LIBFT_DIR)libft.a

SRCS        = ${DIR}main.c ${DIR}initia.c ${DIR}checkutils.c ${DIR}utilsnode.c\
				${DIR}swap.c ${DIR}pushswap.c

OBJS        = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} $(PRINTF) $(LIBFT)
	${CC} ${CFLAGS} ${OBJS} $(PRINTF) $(LIBFT) -o ${NAME}

$(PRINTF):
	make -C $(PRINTF_DIR)

$(LIBFT):
	make -C $(LIBFT_DIR)

all: $(PRINTF) $(LIBFT) ${NAME}

clean:
	${RM} ${OBJS}
	make clean -C $(PRINTF_DIR)
	make clean -C $(LIBFT_DIR)

fclean: clean
	${RM} ${NAME}
	make fclean -C $(PRINTF_DIR)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re