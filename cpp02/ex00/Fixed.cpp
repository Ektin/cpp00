/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:48:28 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/15 10:32:50 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	Fixed::_frac_bits_cnt = 8;

Fixed::Fixed( void ):_raw_int(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( Fixed const& src )
{
	std::cout << "Copy constructor called\n";
	*this = src;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

Fixed &	Fixed::operator=(Fixed const& src)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (_raw_int);
}

void	Fixed::setRawBits(int raw)
{
	//std::cout << "setRawBits member function called\n";
	_raw_int = raw;
}
