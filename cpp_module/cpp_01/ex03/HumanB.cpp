/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:27:55 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/18 16:42:00 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :name(name), weapon(NULL)
{
}

void HumanB::attack()
{
  if (!this->weapon)
    std::cout << this->name << " attacks without weapon" << std::endl;
  else
    std::cout << this->name 
    << " attacks with their weapon " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
  this->weapon = &weapon;
}

HumanB::~HumanB()
{
}