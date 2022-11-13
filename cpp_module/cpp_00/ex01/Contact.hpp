/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:19:26 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/05 16:20:07 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "PhoneBook.hpp"

class Contact
{
private:
  std::string firstname;
  std::string lastname;
  std::string nickname;
  std::string phonenumber;
  std::string darkest_secret;
  
public:
  Contact();
  Contact(std::string firstname,
  std::string lastname,
  std::string nickname,
  std::string phonenumber,
  std::string darkest_secret);
  ~Contact();
  std::string get_firstname();
  std::string get_lastname();
  std::string get_nickname();
  std::string get_phonenumber();
  std::string get_darkestsecret();
};

#endif

