/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:13:27 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/09 01:08:25 by eassofi          ###   ########.fr       */
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
  Zombie(std::string name);
  ~Zombie();
  void annonce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif