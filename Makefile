# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 13:24:41 by kpourcel          #+#    #+#              #
#    Updated: 2023/11/02 15:52:38 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FT_PRINTF =	ft_printf.c ft_printadresse.c ft_printhexa_low.c ft_printhexa_upper.c ft_putstr.c \
			ft_putchar.c ft_printmodulo.c ft_putnbr2.c ft_printunsigned_decimal.c
SRCS = ${FT_PRINTF}

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -I ./

.PHONY: all clean fclean re bonus

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar -rsc ${NAME} ${OBJS}

all: 	${NAME}

clean:	
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

