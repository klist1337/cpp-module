/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:04:04 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/10 01:35:05 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
  std::string type;
public:
  Weapon();
  Weapon(std::string type);
  ~Weapon();
  const std::string& getType();
  void setType(std::string type);
};


#endif