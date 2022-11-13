/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:31:45 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/16 22:07:16 by eassofi          ###   ########.fr       */
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
  Fixed (Fixed const& fixed);
  Fixed(const int i);
  Fixed(const float f);
  Fixed& operator=(Fixed const& fixed);
  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int   toInt(void) const;
  
  ~Fixed();
};

std::ostream& operator<<(std::ostream&, Fixed const&);
#endif