# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apancar <apancar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 08:27:48 by aliberk           #+#    #+#              #
#    Updated: 2024/03/25 09:21:36 by apancar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= PhoneBook.cpp Contact.cpp main.cpp

OBJS		= ${SRCS:.cpp=.o}

NAME		= my_Awesome_PhoneBook

CC			= clang++
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