# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 10:14:15 by eassofi           #+#    #+#              #
#    Updated: 2022/09/29 10:38:28 by eassofi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPP = c++
FLAGS = -g -Wall -Wextra -Werror -std=c++98
RM  = rm -rf

all : $(NAME)

$(NAME): megaphone.o
				$(CPP) $(FLAGS) megaphone.o -o $@

megaphone.o: megaphone.cpp
			$(CPP) $(FLAGS) $< -c

clean:
			$(RM) *.o
fclean : clean
			$(RM) $(NAME)
re : fclean all