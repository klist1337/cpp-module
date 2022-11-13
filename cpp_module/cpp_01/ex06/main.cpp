/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:48:17 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/13 02:54:01 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
  if (ac - 1 == 1)
  {
    std::string level(av[1]);
    Harl harl;
    harl.complain(level);
   }
  else
    std::cout << BLUE << "[NOTHING]" << std::endl
    << "[Probably complaining about insignificant problems]" << std::endl; 
}