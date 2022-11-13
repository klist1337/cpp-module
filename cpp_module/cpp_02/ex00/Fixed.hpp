/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:31:45 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/15 14:14:23 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
class Fixed
{
private:
  int _raw;
  static const int _dbits;
public:
  Fixed();
  Fixed (Fixed const &fixed);
  Fixed& operator=(Fixed const&);
  int getRawBits() const;
  void setRawBits(int const raw);
  ~Fixed();
};

#endif