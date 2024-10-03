/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:51:32 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/18 16:15:50 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://stackoverflow.com/questions/10067510/fixed-point-arithmetic-in-c-programming

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int	main( void )
{
if (0 == 1){
	Fixed	a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << "; _raw_int is " << a.getRawBits() << std::endl;
	std::cout << "b is " << b << "; _raw_int is " << b.getRawBits() << std::endl;
	std::cout << "c is " << c << "; _raw_int is " << c.getRawBits() << std::endl;
	std::cout << "d is " << d << "; _raw_int is " << d.getRawBits() << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "b / a : " << (b / a) << std::endl;

	std::cout << "--a : " << --a << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "a-- : " << a-- << std::endl;

	std::cout << "max : " << Fixed::max(a, b) << std::endl;
}

	Fixed	a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "a++ < a : " << (a++ < a) << std::endl;
	std::cout << "a > a++ : " << (a > a++) << std::endl;
	std::cout << "++a == a : " << (++a == a) << std::endl;
	std::cout << "a > ++a : " << (++a == a) << std::endl;

	std::cout << "++a  == ++a : " << (++a == ++a) << std::endl;
	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "a++  < ++a : " << (a++ < ++a) << std::endl;
	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "++a  < a++ : " << (++a < a++) << std::endl;

	return (0);
}
