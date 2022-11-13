/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:46:22 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/09 03:11:58 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
  int i;
  Zombie *zombie = new Zombie[N];

  i = 0;
  while (i < N)
  {
    zombie[i].set_name(name);
    i++;
  }
  return zombie;
}