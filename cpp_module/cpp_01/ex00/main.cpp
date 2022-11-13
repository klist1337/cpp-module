/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:12:47 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/09 01:11:16 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
  std::string str = "Foo";
  Zombie *zombie = NULL;
  Zombie zomb(str);

  zombie = newZombie(str);
  zombie->annonce();
  zomb.annonce();
  randomChump("bar");
  delete zombie;
}