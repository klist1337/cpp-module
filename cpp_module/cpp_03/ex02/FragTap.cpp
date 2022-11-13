/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTap.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:55:43 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/20 03:48:29 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTap.hpp"

FragTap::FragTap()
{
  std::cout << "FragTap default constructor called" << std::endl;
}

FragTap::FragTap(std::string name): ClapTrap(name)
{
  std::cout << "FragTap constructor called" << std::endl;
  this->name = name;
  this->hit_points = 100;
  this->energy_points = 100;
  this->attack_damage = 30; 
}

FragTap::FragTap(FragTap const& FragTap)
{
  std::cout << "FragTap copy constructor called" << std::endl;
  *this = FragTap;
}

FragTap& FragTap::operator=(FragTap const& FragTap)
{
  this->name = FragTap.name;
  this->hit_points = FragTap.hit_points;
  this->energy_points = FragTap.energy_points;
  this->attack_damage = FragTap.attack_damage;
  return (*this);
}

void FragTap::highFivesGuys()
{
  std::cout << "FragTap " << this->name
  << " Give me high five guys" << std::endl;
}

FragTap::~FragTap()
{
  std::cout << "FragTap destructor constructor called" << std::endl;
}
