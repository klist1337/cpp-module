/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:48:28 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/13 02:07:02 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
// # define LEVEL 4
// # define DEBUG 0
// # define INFO  1
// # define WARNING  2
// # define ERROR 3
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define CYAN "\033[0;36m"
# define BLUE "\033[0;34m"

typedef enum level
{
  DEBUG,
  INFO,
  WARNING,
  ERROR,
  LEVEL
} e_level;

class Harl;

typedef struct s_complain
{
  std::string level;
  void (Harl::*funct_ptr) (void);
} t_complain;
class Harl
{
private:
  t_complain message[LEVEL];
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
public:
  Harl();
  ~Harl();
  void complain(std::string level);
};
#endif