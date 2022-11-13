/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:33:15 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/20 03:23:27 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
  ScavTrap heros("Heros new_gen");

  for (int i = 0; i < 5; i++)
    heros.attack("enemy");
  heros.beRepaired(3);
  heros.takeDamage(3);
  heros.beRepaired(3);
  heros.takeDamage(6);
  heros.attack("enemy");
  heros.beRepaired(6);
  heros.takeDamage(2);
  heros.guardGate();
  
}