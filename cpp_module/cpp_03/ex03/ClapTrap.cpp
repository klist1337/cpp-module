/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:34:14 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/21 04:59:57 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(nullptr), hit_points(0), energy_points(0),
attack_damage(0)
{
  std::cout << "Claptrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_points(10), energy_points(10),
attack_damage(0)
{
  std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& claptrap)
{
  std::cout << "Claptrap copy constructor called" << std::endl;
  *this = claptrap;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& claptrap)
{
  this->name = claptrap.name;
  this->hit_points = claptrap.hit_points;
  this->energy_points = claptrap.energy_points;
  this->attack_damage = claptrap.attack_damage;
  return (*this);
}

void ClapTrap::attack(const std::string& target)
{
  if (this->hit_points > 0 && this->energy_points > 0)
  {
    std::cout << BLUE << "claptrap " << this->name << " attack "
    << target << " causing " << this->attack_damage
    << " points of damage!" << std::endl;
    this->energy_points -= 1;
  }
  else
  {
    std::cout << CYAN << "claptrap " << this->name
    << " can't attack" << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->hit_points > 0)
  {
    this->hit_points -= amount;
    std::cout << CYAN << "claptrap " << this->name
    << " has taken a damage " << amount
    << " [hits_point = " << this->hit_points
    << "]" << std::endl;
  }
  else
  {
    std::cout << CYAN << "claptrap " << this->name
    << " is dead " << "[hit_point = " << this->hit_points
    <<" ]" << std::endl;  
  }
}
    

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->hit_points > 0 && this->energy_points > 0)
  {
    this->hit_points += amount;
    this->energy_points -= 1; 
    std::cout << GREEN << "claptrap " << this->name << " use "
    << amount << " medical kits"
    << " [energy = " << this->energy_points
    << " --- hit_points = " << this->hit_points
    << " ]" << std::endl;
    
  }
  else if (this->hit_points == 0 && this->energy_points == 0)
    std::cout << CYAN << "claptrap " << this->name 
    << " has no hits points left"
    << " and no energy point left" << std::endl;
  else if (this->hit_points == 0 || this->energy_points == 0)
  {
    if (this->hit_points == 0)
    {
      std::cout << CYAN << "claptrap " << this->name 
      << " is dead" << std::endl;
    }
    else
    { 
      std::cout << CYAN << "claptrap " << this->name 
      << " has no energy points left" << std::endl;
    } 
  }
}

ClapTrap::~ClapTrap()
{
  std::cout << "Claptrap destructor called" << std::endl;
}