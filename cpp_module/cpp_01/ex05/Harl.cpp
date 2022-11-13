/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:50:12 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/13 02:06:40 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
  this->message[DEBUG].level = "DEBUG";
  this->message[DEBUG].funct_ptr = &Harl::debug;
  this->message[INFO].level = "INFO";
  this->message[INFO].funct_ptr = &Harl::info;
  this->message[WARNING].level = "WARNING";
  this->message[WARNING].funct_ptr = &Harl::warning;
  this->message[ERROR].level = "ERROR";
  this->message[ERROR].funct_ptr = &Harl::error;

}
void Harl::debug()
{
  std::cout << GREEN << "[ DEBUG ]" << std::endl
  << "I love having extra bacon for my"
  << " 7XL-double-cheese-triple"
  << "-pickle-specialketchup burger." << std::endl
  << "I really do !" << std::endl << std::endl;
}
void Harl::info()
{
  std::cout << YELLOW << "[ INFO ]" << std::endl
  <<"I cannot believe adding extra bacon " 
  << "costs more money." << std::endl
  << "You didn’t put enough "
  <<"bacon in my burger !" << std::endl 
  << "If you did, I "
  << "wouldn’t be asking for more !" << std::endl << std::endl;
}
void Harl::warning()
{
  std::cout << CYAN << "[ WARNING ]" << std::endl 
  << "I think I deserve to have "
  << "some extra bacon for free." << std::endl
  << "I’ve been coming "
  << "for years whereas you started " 
  << "working here since last month." << std::endl << std::endl;
}

void Harl::error()
{
  std::cout << RED << "[ ERROR ]" << std::endl
  << "This is unacceptable ! "
  << "I want to speak to the manager now." << std::endl << std::endl;
}
void Harl::complain(std::string level)
{
  int i;

  i = -1;
  while (++i < LEVEL)
  {
    if (message[i].level == level)
      return (this->*message[i].funct_ptr)();
  }
  std::cout << BLUE << "[NOTHING]" << std::endl
  << " [Probably complaining about insignificant problems]" << std::endl << std::endl;
}

Harl::~Harl()
{
}

