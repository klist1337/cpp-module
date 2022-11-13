/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:26:31 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/10 01:40:49 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
  std::cout << this->name 
  << " attacks with their " << this->weapon.getType()
  << std::endl;
}

void HumanA::setWeapon(Weapon& weapon)
{
  this->weapon = weapon;
}