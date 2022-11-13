/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:32:47 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/16 21:39:19 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int float_to_fixed(float f, const int fractionalBits)
{
  return (roundf(f * (1 << fractionalBits))); 
}

float Fixed::toFloat(void) const
{
  return (this->getRawBits() / float(1 << Fixed::_dbits));
}

int Fixed::toInt(void) const
{
  return (this->_raw >> Fixed::_dbits);
}

std::ostream& operator<<(std::ostream& cout, Fixed const& fixed)
{
  cout << fixed.toFloat();
  return cout;
}

Fixed::Fixed() : _raw (0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed::Fixed(const int i)
{
  std::cout << "Int constructor called" << std::endl;
  this->_raw = (i << Fixed::_dbits);
}

Fixed::Fixed(const float f)
{
  std::cout << "Float constructor called" << std::endl;
  this->_raw = float_to_fixed(f, Fixed::_dbits); 
}

Fixed& Fixed::operator=(Fixed const& fixed)
{
  Fixed::setRawBits(fixed._raw);
  std::cout << "Copy assignement operator called" << std::endl; 
  _raw = Fixed::getRawBits();
  return (*this);
}

int Fixed::getRawBits() const
{
  return (this->_raw);
}

void Fixed::setRawBits(int const raw)
{
  this->_raw = raw;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl; 
}

const int Fixed::_dbits = 8;