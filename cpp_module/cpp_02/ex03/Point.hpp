/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:31:47 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/18 00:15:36 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
  Fixed x;
  Fixed y;
  Fixed area;
public:
  Point ();
  Point (float const x, float const y);
  Point (Point const& point);
  Point& operator=(Point const& point);
  Fixed get_Point_x();
  Fixed get_Point_y();
  ~Point();
};
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif