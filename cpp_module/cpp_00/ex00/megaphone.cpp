/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:12:09 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/06 20:13:34 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
  int i;
  int j;

  i = 0;
  if (ac - 1 >= 1)
  {
    while (av[++i])
    {
      j = -1;
      while (av[i][++j])
        std::cout << (char)toupper(av[i][j]);
    }
    std::cout << std::endl;
  }
  else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl ;
}