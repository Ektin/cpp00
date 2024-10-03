# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 12:33:05 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/07/03 20:36:28 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp \
	PhoneBook.cpp \
	utils.cpp \
	main.cpp

HEADERS = Contact.hpp \
		PhoneBook.hpp \
		utils.hpp

OBJ = $(SRC:%.c=%.o)

NAME = phonebook

CPPFLAGS = -Wall -Wextra -Wpedantic -Werror
CPPFLAGS += -std=c++98

all: $(NAME)

%.o:	%.c $(HEADERS)
	c++ -o $@ -c $< $(CPPFLAGS)

$(NAME): $(OBJ) $(HEADERS)
	c++ -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	@rm -f $(wildcard *.o)
	@rm -f $(wildcard .*.swp) $(wildcard .*.swo) $(wildcard .*.swx)

fclean:	clean
	rm -f $(wildcard *.a) $(wildcard *.out) $(wildcard *.so) $(NAME)

re:
	make fclean
	make
