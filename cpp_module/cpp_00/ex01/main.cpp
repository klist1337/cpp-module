/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 01:16:32 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/07 01:40:33 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string tronc(std::string str)
{
  std::string sub;
  std::string r;
  int len;
  int l;

  len = str.length();
  
  if (len > 10)
  {
    r = str.replace(9, 1, 1, '.');
    sub = str.substr(10, len - 10);
    l = sub.length();
    str = str.substr(0, len - l);
  }
  return str;
}

void print_phonebook(PhoneBook book, int nb)
{
  int  i;

  i = 0;
  if (nb == 9)
    nb -= 1;
  std::cout << std::setw(10) << "index" << "|" 
  << std::setw(10)<< "firstname" << "|" 
  << std::setw(10) << "lastname" << "|"
  << std::setw(10) << "nickname" << "|" << std::endl;
  while (i < nb) 
  {
    std::cout << std::setw(10) << i + 1 << "|" 
    << std::setw(10) << tronc(book.display_firstname(i)) << "|"
    << std::setw(10) << tronc(book.display_lastname(i)) << "|" 
    << std::setw(10) << tronc(book.display_nickname(i)) << "|" << std::endl;
    i++;
  }
  std::cout << std::endl;
}

void print_info(PhoneBook book, int index)
{
  std::cout << std::endl;
  std::cout << "Firstname:"<< book.display_firstname(index - 1) << std::endl;
  std::cout << "Lastname:"<< book.display_lastname(index - 1) << std::endl;
  std::cout << "Nickname:"<< book.display_nickname(index - 1) << std::endl;
  std::cout << "Phone number:"<< book.display_phonenumber(index - 1) << std::endl;
  std::cout << "Darkest Secret:"<< book.display_darkestsecret(index - 1) << std::endl;
}
int main (void)
{
  std::string cmd;
  PhoneBook book;
  int index ;
  std::string firstname, lastname, nickname;
  std::string darkest_secret, phonenumber;
  int nb;
  
  nb = 0;
  std::cout << "\n*************************************";
  std::cout << "\n     Welcome to the PhoneBook";
  std::cout << "\n*************************************";
  std::cout << "\nList of command:";
  std::cout << "\n-ADD: Register a new command";
  std::cout << "\n-SEARCH: Display a requested contact";
  std::cout << "\n-EXIT: Quit PhoneBook";
  while (1)
  {
    std::cout << "\n\nPlease enter a command:"; 
    std::cin >> cmd ;
    if (cmd == "ADD")
    {
      if (nb >= 0 && nb <= 8)
      {
        if (nb == 8)
          std::cout << "You will erase the first one";
        std::cout << "\nFirstname:";
        std::cin.ignore();
        getline(std::cin, firstname);
        std::cout << "\nLastname:";
        getline(std::cin, lastname);
        std::cout << "\nNickname:";
        getline(std::cin, nickname);
        std::cout << "\nPhonenumber:";
        getline(std::cin, phonenumber);
        std::cout << "\nDarkest secret:";
        getline(std::cin, darkest_secret);
        Contact contact(firstname, lastname, 
        nickname, phonenumber, darkest_secret);
        if (nb < 8)
        {
          book.fill_contact(contact);
          std::cout << GREEN "\nContact added\n";
        }
        if (nb == 8)
        {
          book.replace(contact);
          std::cout << GREEN "\nContact added\n";
        }
        nb++;
      }
      else
        std::cout << "Ehh stop ! you can add only 8 contact maximum !";
    }
    else if (cmd == "SEARCH")
    {
      if (nb == 0)
        std::cout << "PhoneBook is empty please insert a contact";
      else
      {
        print_phonebook(book, nb);
        std::cout << "Type index of contact: ";
        while (!(std::cin >> index) || index - 1 < 0 || index > nb)
            {
              std::cout << "bad index! type a right one: ";
              std::cin.clear();
              std::cin.ignore(10000, '\n');
            }
            print_info(book, index);
      }
    }
    else if (cmd == "EXIT")
    {
      std::cout << YELLOW "THANK YOU FOR USING PHONEBOOK BYE !" << std::endl;
      break ;  
    }
    else
    std::cout << "Wrong command, please type the right command\n";
  }
    
}