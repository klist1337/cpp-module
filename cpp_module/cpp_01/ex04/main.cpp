/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:54:07 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/10 03:50:01 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"

int main(int ac, char **av)
{
  if (ac - 1 == 3)
  {
    mysed(av);
  }
  else
    std::cout << "Usage ./mysed [filename] [string1] [string2]"
    << std::endl;
}