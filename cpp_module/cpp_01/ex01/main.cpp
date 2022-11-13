/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:12:47 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/13 22:24:35 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
  int i;
  i = 0;
  std::string str = "Foo";
  Zombie *zombie = zombieHorde(5, str);
  while (i < 5)
  {
    zombie[i].annonce();
    i++;
  }
  delete [] zombie;
}