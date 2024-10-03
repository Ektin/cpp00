# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 18:00:49 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/07/13 15:14:49 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	Harl.cpp \

HEADER = Harl.hpp \

OBJECTS_DIR = .objects/

OBJ = $(SRC:%.cpp=$(addprefix $(OBJECTS_DIR), %.o))

NAME = harlFilter

CPPFLAGS = -Wall -Wextra -Wpedantic -Werror
CPPFLAGS += -std=c++98

CPP = c++

all:	$(NAME)

$(OBJECTS_DIR)%.o:	%.cpp $(HEADER)
	@mkdir -p $(OBJECTS_DIR)
	$(CPP) -c -o $@ $< $(CPPFLAGS)

$(NAME):$(OBJ) $(HEADER)
	$(CPP) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	@rm -rf $(wildcard *.o)
	@rm -rf $(OBJECTS_DIR)
	@rm -rf $(wildcard .*.swp) $(wildcard .*.swo)$(wildcard .*.swx)

fclean:	clean
	@rm -rf $(wildcard *.a) $(wildcard *.out) $(wildcard *.so) $(NAME)

re:
	make fclean
	make
