# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apancar <apancar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 07:54:13 by apancar           #+#    #+#              #
#    Updated: 2024/08/12 12:39:48 by apancar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= HumanA.cpp HumanB.cpp  Weapon.cpp main.cpp

OBJS		= ${SRCS:.cpp=.o}

NAME		= violence

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