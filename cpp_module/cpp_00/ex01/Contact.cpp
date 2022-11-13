/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:21:02 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/05 16:21:14 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(std::string firstname,
  std::string lastname,std::string nickname,
  std::string phonenumber, std::string darkest_secret) 
{
  this->firstname = firstname;
  this->lastname = lastname;
  this->nickname = nickname;
  this->phonenumber = phonenumber;
  this->darkest_secret = darkest_secret;
    
}
Contact::Contact()
{
  Contact("", "", "", "", "");
}

Contact::~Contact()
{
}

std::string Contact::get_firstname()
{
  return this->firstname;
}

std::string Contact::get_lastname()
{
  return this->lastname;
}

std::string Contact::get_nickname()
{
  return this->nickname;
}

std::string Contact::get_phonenumber()
{
  return this->phonenumber;
}

std::string Contact::get_darkestsecret()
{
  return this->darkest_secret;
}

