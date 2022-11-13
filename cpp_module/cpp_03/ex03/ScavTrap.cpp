/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:55:43 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/20 03:24:01 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
  std::cout << "ScavTrap constructor called" << std::endl;
  this->name = name;
  this->hit_points = 100;
  this->energy_points = 50;
  this->attack_damage = 20; 
}

ScavTrap::ScavTrap(ScavTrap const& scavtrap)
{
  std::cout << "ScavTrap copy constructor called" << std::endl;
  *this = scavtrap;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scavtrap)
{
  this->name = scavtrap.name;
  this->hit_points = scavtrap.hit_points;
  this->energy_points = scavtrap.energy_points;
  this->attack_damage = scavtrap.attack_damage;
  return (*this);
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << this->name 
  << " is entered in guard mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap destructor constructor called" << std::endl;
}
