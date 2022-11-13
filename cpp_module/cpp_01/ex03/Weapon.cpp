/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:04:49 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/10 01:55:15 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::Weapon()
{
  
}
Weapon::~Weapon()
{
}

const std::string&  Weapon::getType()
{
  return this->type;
}

void Weapon::setType(std::string type)
{
  this->type = type;
}