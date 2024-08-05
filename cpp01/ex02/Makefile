# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apancar <apancar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 10:42:52 by apancar           #+#    #+#              #
#    Updated: 2024/08/03 11:31:52 by apancar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp

OBJS		= ${SRCS:.cpp=.o}

NAME		= hi_this_is_brain

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