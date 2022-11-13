/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:13:27 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/09 02:42:15 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
private:
  std::string name;
public:
  Zombie();
  Zombie(std::string name);
  ~Zombie();
  void set_name(std::string name);
  void annonce(void);
};

Zombie* zombieHorde(int N, std::string name);
#endif