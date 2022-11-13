# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 21:12:03 by eassofi           #+#    #+#              #
#    Updated: 2022/10/31 02:22:19 by eassofi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern

CPP = c++

FLAGS = -Wall -Wextra -Werror -g  -std=c++98

RM = rm -rf

SRC = Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
				@echo "\033[0;34mCompiling..."
				@$(CPP) $(FLAGS) $(OBJ) -o $@
				@echo "\033[0;32mDone !"
			
%.o : %.cpp
			@echo "\033[0;34mCompiling..."
			@$(CPP) $(FLAGS) $< -c

clean: 
			@echo "\033[0;35mCleaning"
			@$(RM) *.o

fclean : clean
				@echo "\033[0;35m$(NAME) removed"
				@$(RM) $(NAME)

re: fclean all
