/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:55:43 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/21 05:01:08 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
  std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTap(name), ScavTrap(name)
{
  std::cout << "DiamondTrap constructor called" << std::endl;
  this->name = name;
  DiamondTrap::hit_points = FragTap::hit_points;
  DiamondTrap::energy_points = ScavTrap::energy_points;
  DiamondTrap::attack_damage = FragTap::attack_damage; 
}

DiamondTrap::DiamondTrap(DiamondTrap const& DiamondTrap)
{
  std::cout << "DiamondTrap copy constructor called" << std::endl;
  *this = DiamondTrap;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& diamondtrap)
{
  this->name = diamondtrap.name;
  this->hit_points = diamondtrap.hit_points;
  this->energy_points = diamondtrap.energy_points;
  this->attack_damage = diamondtrap.attack_damage;
  return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
  std::cout << "DiamondTrap " << DiamondTrap::name 
  << " ClapTrap " << ClapTrap::name + "_clap_name" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
  std::cout << "DiamondTrap destructor constructor called" << std::endl;
}
