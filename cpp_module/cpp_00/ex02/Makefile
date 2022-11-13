# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 14:50:21 by eassofi           #+#    #+#              #
#    Updated: 2022/10/06 21:56:14 by eassofi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CPP  = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
				$(CPP) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp
			$(CPP) $(FLAGS) $< -c

clean: 
			$(RM) *.o

fclean: clean
			$(RM) $(NAME)
re: fclean all