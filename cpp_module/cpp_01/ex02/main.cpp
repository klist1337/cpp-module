/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 03:19:33 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/09 04:54:33 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << "string address:" << &string << std::endl;
  std::cout << "stringPTR address:" << stringPTR << std::endl;
  std::cout << "stringREF address:" << &stringREF << std::endl;
  std::cout << "string value:" << string <<  std::endl;
  std::cout << "stringPTR value:" << *stringPTR << std::endl;
  std::cout << "stringREF value:" << stringREF << std::endl;
}