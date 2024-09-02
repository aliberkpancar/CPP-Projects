# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aliberk <aliberk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 08:49:57 by apancar           #+#    #+#              #
#    Updated: 2024/08/04 07:10:52 by aliberk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp Fixed.cpp

OBJS		= ${SRCS:.cpp=.o}

NAME		= My_First_Class_in_Orthodox_Canonical_Form

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re