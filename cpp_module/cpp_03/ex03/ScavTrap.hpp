/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:54:34 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/21 02:38:50 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
  /* data */
public:
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const& scavtrap);
  ScavTrap& operator=(ScavTrap const& scavtrap);
  void guardGate();
  ~ScavTrap();
};
#endif

