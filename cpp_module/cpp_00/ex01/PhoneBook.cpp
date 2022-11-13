/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:19:01 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/05 16:20:00 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
  this->nb = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::fill_contact(Contact cont)
{
  contact[nb] = cont;
  nb++;
}

int PhoneBook::get_nb()
{
  return nb;
}

void PhoneBook::display_phonebook()
{
  int i;

  i = -1;
  while (++i < nb)
  {
    std::cout << contact[i].get_firstname() ;
  }
}

std::string PhoneBook::display_firstname(int index)
{
   return contact[index].get_firstname();
}

std::string PhoneBook::display_lastname(int index)
{
   return contact[index].get_lastname();
}

std::string PhoneBook::display_nickname(int index)
{
   return contact[index].get_nickname();
}

std::string PhoneBook::display_darkestsecret(int index)
{
   return contact[index].get_darkestsecret();
}

std::string PhoneBook::display_phonenumber(int index)
{
   return contact[index].get_phonenumber();
}

void PhoneBook::replace(Contact c)
{
  contact[0] = c ;
}