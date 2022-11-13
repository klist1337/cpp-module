/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:33:15 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/20 03:50:23 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTap.hpp"

int main(void)
{
  FragTap heros("Hero next gen");

  for (int i = 0; i < 5; i++)
    heros.attack("enemy");
  heros.beRepaired(3);
  heros.takeDamage(100);
  heros.beRepaired(3);
  heros.takeDamage(6);
  heros.attack("enemy");
  heros.beRepaired(6);
  heros.takeDamage(30);
  heros.highFivesGuys();
  
}