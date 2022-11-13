# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 10:14:15 by eassofi           #+#    #+#              #
#    Updated: 2022/10/06 21:56:24 by eassofi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CPP = c++

FLAGS = -g -Wall -Wextra -fsanitize=address -Werror -std=c++98

RM  = rm -rf

SRC = PhoneBook.cpp\
			Contact.cpp\
			main.cpp\
			
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
				$(CPP) $(FLAGS)  $(OBJ) -o $@
%.o: %.cpp
			$(CPP) $(FLAGS) $< -c
clean:
			$(RM) *.o
fclean : clean
			$(RM) $(NAME)
re : fclean all