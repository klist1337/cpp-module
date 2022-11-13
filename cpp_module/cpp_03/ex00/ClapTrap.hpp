/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:35:02 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/25 00:26:09 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define CYAN "\033[0;35m"
# include <iostream>

class ClapTrap
{
private:
  std::string name;
  int hit_points;
  int energy_points;
  int attack_damage;
public:
  ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(ClapTrap &claptrap);
  ClapTrap& operator=(ClapTrap const&);
  ~ClapTrap();
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
}

#endif

