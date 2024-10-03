# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 14:43:52 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/08/11 21:13:12 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# does not work for busy resources:
# https://superuser.com/questions/76061/how-do-i-make-rm-not-give-an-error-if-a-file-doesnt-exist

SRC = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	DiamondTrap.cpp \

HEADER = ClapTrap.hpp \
	ScavTrap.hpp \
	FragTrap.hpp \
	DiamondTrap.hpp \

OBJDIR = .objects/

OBJ = $(SRC:%.cpp=$(addprefix $(OBJDIR), %.o))

CPP = c++

CPPFLAGS = -Wall -Wextra -Wpedantic -Werror
CPPFLAGS += -std=c++98
#CPPFLAGS += -fno-elide-constructors
CPPFLAGS += -Wshadow -Wno-shadow

NAME = diamondtrap


all: $(NAME)

$(NAME):	$(OBJ) $(HEADER)
	$(CPP) -o $(NAME) $(OBJ) $(CPPFLAGS)

$(OBJDIR)%.o:	%.cpp $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CPP) -c -o $@ $< $(CPPFLAGS)

clean:
	rm -rf $(OBJDIR)
	rm -f $(wildcard *.o)

fclean:	clean
	rm -rf $(NAME) $(wildcard *.out)
	rm -rf $(wildcard .*.swp) $(wildcard .*.swo) $(wildcard .*.swx)
	rm -f $(wildcard *.o) $(wildcard *.a)
	@#rm -f $(wildcard .nfs*) || true

re:
	make fclean
	make

.PHONY:
	clean fclean re
