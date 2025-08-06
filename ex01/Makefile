# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 13:24:16 by fefo              #+#    #+#              #
#    Updated: 2025/08/06 16:51:51 by fileonar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = contact

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++17 -g

SRCS =	contact.cpp \
		phonebook.cpp

HEADERS = contact.hpp \
		phonebook.hpp

LIB = -I .
 
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LIB) -o $@ $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re