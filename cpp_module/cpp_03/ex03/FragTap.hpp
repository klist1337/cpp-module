/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTap.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:54:34 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/21 02:39:11 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTAP_HPP
#define FRAGTAP_HPP
#include "ClapTrap.hpp"

class FragTap : virtual public ClapTrap
{
private:
public:
  FragTap();
  FragTap(std::string name);
  FragTap(FragTap const& FragTap);
  FragTap& operator=(FragTap const& FragTap);
  void highFivesGuys();
  ~FragTap();
};
#endif

