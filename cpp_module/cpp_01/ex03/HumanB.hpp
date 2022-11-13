/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:16:49 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/10 01:44:56 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
  std::string name;
  Weapon *weapon;
public:
  HumanB(std::string name);
  ~HumanB();
  void attack();
  void setWeapon(Weapon& weapon);
};

#endif
