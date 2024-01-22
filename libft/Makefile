# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tali <tali@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 22:01:25 by tali              #+#    #+#              #
#    Updated: 2024/01/22 22:01:27 by tali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Werror -Wextra
CC		= gcc
PATHS	= src/
PATHO	= obj/
INC		= -I ./include_h
NAME	= libft.a
SRC		= $(notdir $(wildcard ${PATHS}*.c))
SRCS	= ${addprefix ${PATHS}, ${SRC}}
OBJ		= ${SRC:.c=.o}
OBJS	= ${addprefix ${PATHO}, ${OBJ}}

${PATHO}%.o: ${PATHS}%.c
	${CC} ${CFLAGS} -c $< -o $@ ${INC}

all: ${NAME}

${NAME}: ${OBJS}
	ar -rc ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re:  fclean all

.PHONY : clean all fclean re
