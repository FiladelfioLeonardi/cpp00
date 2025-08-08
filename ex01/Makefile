# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 13:24:16 by fefo              #+#    #+#              #
#    Updated: 2025/08/08 12:59:55 by fefo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++17 -g

SRCS =	contact.cpp \
		phonebook.cpp \
		main.cpp

HEADERS = contact.hpp \
		phonebook.hpp

LIB = -I .
 
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(LIB) -o $@ $^

%.o: %.cpp
	$(CC) $(FLAGS) $(LIB) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re