# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 21:12:03 by eassofi           #+#    #+#              #
#    Updated: 2022/10/10 03:24:16 by eassofi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
				@echo "\033[0;34mCompiling..."
				@$(CC) $(FLAGS) $(OBJ) -o $@
				@echo "\033[0;32mDone !"
			
%.o : %.cpp
			@echo "\033[0;34mCompiling..."
			@$(CC) $(FLAGS) $< -c

clean:
			@echo "\033[0;35mObject files removed"
			@$(RM) *.o

fclean : clean
			@echo "\033[0;35m$(NAME) removed"
			@$(RM) $(NAME)

re: fclean all

