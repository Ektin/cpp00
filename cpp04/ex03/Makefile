# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 14:43:52 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/08/16 16:05:33 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	AMateria.cpp \
	Ice.cpp \
	Cure.cpp \
	Character.cpp \
	MateriaSource.cpp \

HEADER = AMateria.hpp \
	Ice.hpp \
	Cure.hpp \
	ICharacter.hpp \
	Character.hpp \
	IMateriaSource.hpp \
	MateriaSource.hpp \

OBJDIR = .objects/

OBJ = $(SRC:%.cpp=$(addprefix $(OBJDIR), %.o))

CPP = c++

CPPFLAGS = -Wall -Wextra -Wpedantic -Werror
CPPFLAGS += -std=c++98
CPPFLAGS += -fno-elide-constructors
#CPPFLAGS += -Wshadow -Wno-shadow

NAME = a.out


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
