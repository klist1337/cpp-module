/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <eassofi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:05:17 by eassofi           #+#    #+#             */
/*   Updated: 2022/10/18 18:29:18 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed const d(Fixed(5.05f) + Fixed(2));
Fixed const c(Fixed(5.05f) - Fixed(2));
Fixed const e(Fixed(5.05f) / Fixed(2));
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << d << std::endl;
std::cout << c << std::endl;
std::cout << e << std::endl;
std::cout << a-- << std::endl;
std::cout <<"a-- = " << a << std::endl;
std::cout << "++a = " << ++a << std::endl;
std::cout << --a << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << b << std::endl;
return 0;
}