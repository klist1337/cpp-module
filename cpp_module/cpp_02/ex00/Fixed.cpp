/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:32:47 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/15 14:19:30 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw (0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
  std::cout << "Copy constructor called" << std::endl;
  Fixed::setRawBits(fixed._raw);
  this->_raw = Fixed::getRawBits();
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
  std::cout << "getRawBits member function called" << std::endl; 
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

const int Fixed::_dbits = 0;