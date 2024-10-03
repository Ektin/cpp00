# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 20:36:12 by EktinOpUrims      #+#    #+#              #
#    Updated: 2024/06/11 20:54:45 by EktinOpUrims     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
NAME = megaphone

all: $(NAME)

$(NAME):	$(SRC)
	c++ $(SRC) -o $(NAME) -Wall -Wextra -Wpedantic -Werror

clean:
	rm -rf $(wildcard *.o) $(wildcard *.h.gch)
	rm -rf $(wildcard .*.swp) $(wildcard .*.swo) $(wildcard .*.swx)

fclean:
	@make clean
	@rm -rf $(wildcard *.a) $(wildcard*.out) $(wildcard *.so) $(NAME)

re:
	@make fclean
	@make all
