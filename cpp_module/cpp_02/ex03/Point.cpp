/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:33:39 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/18 01:47:05 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0) , y(0), area(0)
{
}

Point::Point(float const x, float const y) : x(x), y(y)
{
}

Point::Point(Point const& point)
{
  *this = point;
}

Point& Point::operator=(Point const& point)
{
  this->x = point.x;
  this->y = point.y;
  return (*this);
}


Fixed Point::get_Point_x()
{
  return (this->x);
}

Fixed Point::get_Point_y()
{
  return (this->y);
}

Point::~Point()
{
}