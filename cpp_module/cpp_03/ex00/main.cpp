/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:33:15 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/20 01:29:04 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
  ClapTrap heros("heros");

  for (int i = 0; i < 5; i++)
    heros.attack("enemy");
  heros.beRepaired(3);
  heros.takeDamage(3);
  heros.beRepaired(3);
  heros.takeDamage(10);
  heros.attack("enemy");
  heros.beRepaired(2);
  heros.takeDamage(2);
}