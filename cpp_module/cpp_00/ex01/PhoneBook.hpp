/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:20:36 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/05 16:20:38 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP
# include <iostream>
# include <iomanip>
# include <string.h>
# include "Contact.hpp"
# define BLACK "033[1;30m"     
# define RED   "\033[1;31m"         
# define GREEN "\033[1;32m"      
# define YELLOW "\033[1;33m"     
// BBlue='\033[1;34m'        
// BPurple='\033[1;35m'      
// BCyan='\033[1;36m' 
// BWhite='\033[1;37m'

class PhoneBook
{
private:
  Contact contact[8];
  int nb;
public:
  PhoneBook();
  ~PhoneBook();
  void fill_contact(Contact cont);
  void display_phonebook();
  int get_nb();
  std::string display_firstname(int index);
  std::string display_lastname(int index);
  std::string display_nickname(int index);
  std::string display_darkestsecret(int index);
  std::string display_phonenumber(int index);
  void replace(Contact c);
};

#endif