# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 19:22:04 by plashkar          #+#    #+#              #
#    Updated: 2024/12/07 17:51:10 by plashkar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CC = c++

STANDARD_FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = \
	Animal.cpp \
	AAnimal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	Brain.cpp \
	main.cpp \

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	@$(CC) $(STANDARD_FLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling $@"
	@$(CC) $(STANDARD_FLAGS) $(OBJ) -o $(NAME) > /dev/null
	@echo "ex02 has been created."

clean:
	@rm -f $(OBJ)
	@echo Object files have been deleted.

fclean: clean
	@rm -f $(NAME)
	@echo All created files have been deleted.

re: fclean all

v: all clean
	@echo
	@./ex02

.PHONY: fclean clean all re
