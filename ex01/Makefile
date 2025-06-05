# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 13:24:16 by fefo              #+#    #+#              #
#    Updated: 2025/06/05 18:38:24 by fileonar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = contact

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	contact.cpp \
		# PhoneBook.cpp

HEADERS = contact.hpp \
		# PhoneBook.hpp
OBJS = $(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re