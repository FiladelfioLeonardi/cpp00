# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 13:24:16 by fefo              #+#    #+#              #
#    Updated: 2025/05/21 13:28:13 by fefo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = contact

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	contact.cpp \
		# PhoneBook.cpp

HEADERS = contact.hpp \
		# PhoneBook.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(SRCS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re