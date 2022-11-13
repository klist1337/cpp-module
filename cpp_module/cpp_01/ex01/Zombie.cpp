/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:23:10 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/09 02:42:34 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
  this->name = name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
  std::cout << this->name << " destructor" << std::endl;
}

void Zombie::annonce(void)
{
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

void Zombie::set_name(std::string name)
{
  this->name = name;
}


