# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 14:30:45 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/07/31 15:20:55 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	ClapTrap.cpp \
	FragTrap.cpp \

HEADER = ClapTrap.hpp \
	FragTrap.hpp \

OBJDIR = .objects/
OBJ = $(SRC:%.cpp=$(addprefix $(OBJDIR), %.o))

CPP = c++

CPPFLAGS = -Wall -Wextra -Wpedantic -Werror
CPPFLAGS += -std=c++98

NAME = fragtrap


all: $(NAME)

$(NAME):	$(OBJ) $(HEADER)
	$(CPP) -o $(NAME) $(OBJ) $(CPPFLAGS)

$(OBJDIR)%.o:	%.cpp
	@mkdir -p $(OBJDIR)
	$(CPP) -c -o $@ $< $(CPPFLAGS)

clean:
	rm -rf $(OBJDIR)

fclean:	clean
	rm -rf $(NAME) $(wildcard *.out)	
	rm -rf $(wildcard .*.swp) $(wildcard .*.swo) $(wildcard .*.swx)
	#rm -rf $(wildcard .nfs*)

re:
	make fclean
	make

.PHONY:
	clean fclean
