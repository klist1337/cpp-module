/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:31:45 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/18 00:57:07 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <ostream>
# include <cmath>

class Fixed
{
private:
  int _raw;
  static const int _dbits;
public:
  Fixed();
  Fixed(Fixed const& fixed);
  
  Fixed(const int i);
  Fixed(const float f);
  Fixed& operator=(Fixed const& fixed);
  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int   toInt(void) const;
  static const Fixed min(Fixed&, Fixed&);
  static const Fixed min(Fixed const&, Fixed const&);
  static const Fixed max(Fixed&, Fixed&);
  static const Fixed max(Fixed const&, Fixed const&);
  
  bool operator>(Fixed const&) const;
  bool operator<(Fixed const&) const;
  bool operator==(Fixed const&) const;
  bool operator!=(Fixed const&) const;
  bool operator>=(Fixed const&) const;
  bool operator<=(Fixed const&) const;
  Fixed operator*(Fixed const&) const;
  Fixed operator+(Fixed const&) const;
  Fixed operator-(Fixed const&) const;
  Fixed operator/(Fixed const&) const;
  Fixed& operator++();
  Fixed& operator--();
  Fixed operator--(int);
  Fixed operator++(int);
  const Fixed operator-();
  Fixed& operator*(int);
  ~Fixed();
};
Fixed absolute_value (Fixed n);
std::ostream& operator<<(std::ostream&, Fixed const&);
#endif