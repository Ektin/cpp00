# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/14 19:28:03 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/07/17 13:18:29 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	Fixed.cpp \

HEADER = Fixed.hpp \

CPPFLAGS = -Wall -Wextra -Wpedantic -Wno-unused -Werror
CPPFLAGS += -std=c++98

CPP = c++

OBJDIR = .objects/

OBJ = $(SRC:%.cpp=$(addprefix $(OBJDIR), %.o))

NAME = a.out



$(NAME): $(OBJ) $(HEADER)
	$(CPP) -o $(NAME) $(OBJ) $(CPPFLAGS)

$(OBJDIR)%.o:	%.cpp $(HEADER)
	mkdir -p $(OBJDIR)
	$(CPP) -c -o $@ $< $(CPPFLAGS)	

clean:
	rm -rf $(OBJDIR)
	rm -rf $(wildcard .*.swp) $(wildcard .*.swo) $(wildcard .*.swx)
	#rm -rf $(wildcard .nfs*)

fclean:	clean
	rm -rf $(wildcard *.out) $(NAME)

re:
	make fclean
	make
