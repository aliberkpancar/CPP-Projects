# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apancar <apancar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/23 08:04:03 by apancar           #+#    #+#              #
#    Updated: 2024/08/31 14:02:24 by apancar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp animal.cpp cat.cpp dog.cpp brain.cpp wrongAnimal.cpp wrongCat.cpp

OBJS		= $(SRCS:.cpp=.o)

NAME		= abstract_class

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
