# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 18:00:49 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/07/13 14:56:39 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp \

HEADER = Weapon.hpp \
	HumanA.hpp \
	HumanB.hpp \

OBJ = $(SRC:%.cpp=%.o)

NAME = weapon

CPPFLAGS = -Wall -Wextra -Wpedantic -Werror
CPPFLAGS += -std=c++98

CPP = c++

all:	$(NAME)

%.o:	%.cpp $(HEADER)
	$(CPP) -o $@ -c $< $(CPPFLAGS)

$(NAME):$(OBJ) $(HEADER)
	$(CPP) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	@rm -rf $(wildcard *.o)
	@rm -rf $(wildcard .*.swp) $(wildcard .*.swo)$(wildcard .*.swx)

fclean:	clean
	@rm -rf $(wildcard *.a) $(wildcard *.out) $(wildcard *.so) $(NAME)

re:
	make fclean
	make
