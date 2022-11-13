/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTap.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:54:34 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/21 01:36:34 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTAP_HPP
#define FRAGTAP_HPP
#include "ClapTrap.hpp"

class FragTap : public ClapTrap
{
private:
  /* data */
public:
  FragTap();
  FragTap(std::string name);
  FragTap(FragTap const& FragTap);
  FragTap& operator=(FragTap const& FragTap);
  void highFivesGuys();
  ~FragTap();
};
#endif

