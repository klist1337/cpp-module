/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:21:36 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/18 11:23:02 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
  Point A, B, C;
  A = a, B = b, C = c;
  float air;
  
  air = ((A.get_Point_x().toFloat() * (B.get_Point_y().toFloat() - C.get_Point_y().toFloat())
      + B.get_Point_x().toFloat() * (C.get_Point_y().toFloat() - A.get_Point_y().toFloat())
      + C.get_Point_x().toFloat() * (A.get_Point_y().toFloat() - B.get_Point_y().toFloat())) / 2.0);
  if (air < 0)
    return (-air);
  return (air);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
  float A, A1, A2, A3;

  A = area(a, b, c);
  A1 = area(point, b, c);
  A2 = area(a, point, c);
  A3 = area(a ,b , point);
  if (A == 0 && A1 == 0 && A2 == 0 && A3 == 0)
    return (false); 
  if (A == (A1 + A2 + A3))
    return (true);
  return (false);
}