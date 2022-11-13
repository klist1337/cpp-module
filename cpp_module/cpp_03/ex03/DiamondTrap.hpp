/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:54:34 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/21 02:15:27 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTap.hpp"

class DiamondTrap : public FragTap, public ScavTrap
{
private:
 std::string name;
public:
  DiamondTrap();
  DiamondTrap(std::string name);
  DiamondTrap(DiamondTrap const& diamondtrap);
  DiamondTrap& operator=(DiamondTrap const& diamondtrap);
  void attack(const std::string& target);
  void whoAmI();
  ~DiamondTrap();
};
#endif


