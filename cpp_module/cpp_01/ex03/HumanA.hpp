/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:18:23 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/10 01:54:48 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
  private:
  std::string name;
  Weapon &weapon;
  public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif
