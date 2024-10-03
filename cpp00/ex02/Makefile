# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 20:30:03 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/07/03 22:40:03 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = tests.cpp \
	Account.cpp \

HEADER = Account.hpp \

OBJ = $(SRC:%.c=%.o)

NAME = account

CPPFLAGS = -Wall -Wextra -Wpedantic #-Werror
CPPFLAGS += -std=c++98

CPP = c++

all:	$(NAME)

%.o:	%.c $(HEADER)
	$(CPP) -o $(NAME) $(OBJ) $(CPPFLAGS)

$(NAME):$(OBJ) $(HEADERS)
	$(CPP) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	@rm -f $(wildcard *.o)
	@rm -f $(wildcard .*.swp) $(wildcard .*.swo) $(wildcard .*.swx) 

fclean:	clean
	@rm -f $(wildcard *.a) $(wildcard *.out) $(wildcard *.so) $(NAME)

re:
	make fclean
	make
