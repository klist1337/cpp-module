/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:28:29 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/13 23:11:09 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"

void mysed(char **av)
{
  std::string file(av[1]);
  std::string s1(av[2]);
  std::string replace(av[3]);
  std::string line;
  std::ifstream in, err;
  size_t pos;

  in.open(file, std::fstream::in);
  err.open(file, std::fstream::in);
  if (!in.is_open())
  {
    std::cerr << "failed to open file" << std::endl;
    return ;
  }
  if (!(std::getline(err, line)))
  {
    std::cout << "Empty file" << std::endl;
    return ;
  }
  std::ofstream out(file + ".replace");
  while (std::getline(in, line))
  {
    pos = line.find(s1);
    if (pos == std::string::npos)
    {
      out << line << std::endl;
    }
    else
    {
      out << line.substr(0, pos) << replace;
      std::string next = line.substr(pos + s1.length());
      pos = next.find(s1);
      while (pos != std::string::npos)
      {
        out << next.substr(0, pos) << replace;
        next = next.substr(pos + s1.length());
        pos = next.find(s1);
      }
      out << next << std::endl;
    }
  }
  in.close();
  out.close();
}