# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 16:16:56 by hjacquel          #+#    #+#              #
#    Updated: 2022/08/23 07:50:18 by hjacquel         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC	= srcs/main.c srcs/math.c srcs/operation.c srcs/parse.c srcs/print.c

OBJS	= ${SRC:.c=.o}

HEADERS	= includes/

NAME	= do-op

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc

RM		= rm -f


all:
	${CC} ${SRC} ${CFLAGS} -I ${HEADERS}  -o ${NAME}


.c.o: all

$(NAME): all

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
