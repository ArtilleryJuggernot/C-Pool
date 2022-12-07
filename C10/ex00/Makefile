# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 03:53:25 by hjacquel          #+#    #+#              #
#    Updated: 2022/08/20 04:13:57 by hjacquel         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC	= srcs/file.c srcs/error.c srcs/main.c srcs/print.c 

OBJS	= ${SRC:.c=.o}

HEADERS	= includes/

NAME	= ft_display_file

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc

RM		= rm -f

all:
	${CC} ${SRC} ${CFLAGS} -I ${HEADERS}  -o ${NAME}


clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

.PHONY: all clean fclean
