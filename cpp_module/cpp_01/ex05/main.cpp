/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:48:17 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/13 01:10:18 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
  Harl harl = Harl();
  harl.complain("DEBUG");
  harl.complain("info");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("ERROR");
  void (Harl::*ptr)(std::string level);
  ptr = &Harl::complain;
  (harl.*ptr)("DEBUG");
}