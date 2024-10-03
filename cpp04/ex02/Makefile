# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 14:43:52 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/08/15 21:07:51 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	AAnimal.cpp \
	Dog.cpp \
	Cat.cpp \
	Brain.cpp \

HEADER = AAnimal.hpp \
	Dog.hpp \
	Cat.hpp \
	Brain.hpp \

OBJDIR = .objects/

OBJ = $(SRC:%.cpp=$(addprefix $(OBJDIR), %.o))

CPP = c++

CPPFLAGS = -Wall -Wextra -Wpedantic -Werror
CPPFLAGS += -std=c++98
CPPFLAGS += -fno-elide-constructors
#CPPFLAGS += -Wshadow -Wno-shadow

NAME = animal


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
