# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aliberk <aliberk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 08:49:57 by apancar           #+#    #+#              #
#    Updated: 2024/08/26 18:31:01 by aliberk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp Fixed.cpp

OBJS		= ${SRCS:.cpp=.o}

NAME		= Towards_a_more_useful_fixed-point_number_class

CC			= c++
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -std=c++98

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean re