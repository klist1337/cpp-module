/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:32:47 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/18 01:28:55 by eassofi          ###   ########.fr       */
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
}

Fixed::Fixed(Fixed const &fixed)
{
  *this = fixed;
}

Fixed::Fixed(const int i)
{
  this->_raw = (i << Fixed::_dbits);
}

Fixed::Fixed(const float f)
{
  this->_raw = float_to_fixed(f, Fixed::_dbits); 
}

Fixed& Fixed::operator=(Fixed const& fixed)
{
  Fixed::setRawBits(fixed._raw);
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

//======================================================================//
/**                   Comparison operator                               **/
//======================================================================//

bool Fixed::operator>(Fixed const& fixed) const
{
  if (this->_raw > fixed._raw)
    return (true);
  else
    return (false);
}

bool Fixed::operator<(Fixed const& fixed) const
{
  if (!this->operator>(fixed))
    return (true);
  else
    return (false);
}

bool Fixed::operator==(Fixed const& fixed) const
{
  if (this->_raw == fixed._raw)
    return (true);
  else
    return (false);
}

bool Fixed::operator!=(Fixed const& fixed) const
{
  if (!this->operator==(fixed))
    return (true);
  else
    return (false);
}

bool Fixed::operator<=(Fixed const& fixed) const
{
  if (this->operator<(fixed) || this->operator==(fixed))
    return (true);
  else
    return (false);
}

bool Fixed::operator>=(Fixed const& fixed) const
{
  if (!this->operator<=(fixed))
    return (true);
  else
    return (false);
}

//======================================================================//
/**                   Arithmetic operator                               **/
//======================================================================//

Fixed Fixed::operator*(Fixed const& fixed) const
{
  Fixed ret;
  ret._raw = (this->_raw * fixed._raw) >> Fixed::_dbits;
  return (ret);
}

Fixed Fixed::operator+(Fixed const& fixed) const
{
  Fixed ret;
  ret._raw = (this->_raw + fixed._raw) >> Fixed::_dbits;
  return (ret);
}

Fixed Fixed::operator-(Fixed const& fixed) const
{
  Fixed ret;
  ret._raw = (this->_raw - fixed._raw) >> Fixed::_dbits;
  return (ret);
}

Fixed Fixed::operator/(Fixed const& fixed) const
{
  Fixed ret;
  ret._raw = (this->_raw / fixed._raw) >> Fixed::_dbits;
  return (ret);
}
//======================================================================//
/**                   incrementation && decrementation                  **/
//======================================================================//

Fixed& Fixed::operator++()
{
  this->_raw = ++this->_raw;
  return (*this);
}

Fixed Fixed::operator++(int)
{
  Fixed tmp;
  tmp = *this;
  ++(*this);
  return (tmp);
}
Fixed& Fixed::operator--()
{
  this->_raw = --this->_raw;
  return (*this);
}

Fixed Fixed::operator--(int)
{
  Fixed tmp;
  tmp = *this;
  --(*this);
  return (tmp);
}

Fixed& Fixed::operator*(int i)
{
  this->_raw = (this->_raw * i ) >> Fixed::_dbits;
  return (*this);
}

const Fixed Fixed::operator-()
{
  Fixed tmp;

  tmp = this->operator*(-1);
  return (tmp);
}

//======================================================================//
/**                 Min && Max function                                 **/
//======================================================================//

Fixed const Fixed::max(Fixed const& a , Fixed const& b)
{
  if (a > b)
    return (a);
  return (b);
}

Fixed const Fixed::max(Fixed& a , Fixed& b)
{
  if (a > b)
    return (a);
  return (b);
}

Fixed const Fixed::min(Fixed& a , Fixed& b)
{
  if (a < b)
    return (a);
  return (b);
}

Fixed const Fixed::min(Fixed const& a , Fixed const& b)
{
  if (a < b)
    return (a);
  return (b);
}

Fixed absolute_value(Fixed n)
{
  if (n < 0)
     return (-n);
  return (n);
}


Fixed::~Fixed()
{
}

const int Fixed::_dbits = 8;