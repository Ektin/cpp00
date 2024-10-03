/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:48:28 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/15 16:55:53 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int		Fixed::_frac_bits_cnt = FRAC_BITS_CNT;
int		Fixed::_two_power = Fixed::compute_two_power();
//int		Fixed::_high_precision_output = HIGH_PRECISION_OUTPUT;
//int		Fixed::_frac_decimals_cnt = Fixed::compute_frac_decimals_cnt();
//__int64_t	Fixed::_ten_power = Fixed::compute_ten_power();

Fixed::Fixed( void ):_raw_int(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( int n ):_raw_int(n)
{
	std::cout << "Int constructor called\n";
	this->_raw_int = n << this->get_frac_bits_cnt();
}

Fixed::Fixed( float n )
{
	std::cout << "Float constructor called\n";
	this->_raw_int = roundf((double)n * Fixed::get_two_power());
}

Fixed::Fixed( Fixed const& src )
{
	std::cout << "Copy constructor called\n";
	*this = src; // why here copy assignment operator is not called? 15Jul2024
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
	return (this->_raw_int);
}

void	Fixed::setRawBits(int raw)
{
	_raw_int = raw;
}

int	Fixed::get_frac_bits_cnt( void ) const
{
	return (_frac_bits_cnt);
}

int	Fixed::compute_two_power( void )
{
	return (1 << _frac_bits_cnt);
}

int	Fixed::get_two_power( void ) const
{
	return (Fixed::_two_power);
}

////////////////////////// We will see if we need it ///////////////////
/*
int	Fixed::compute_frac_decimals_cnt( void )
{
	int	pow;
	int	cnt;

	if (Fixed::_high_precision_output)
		return (Fixed::_frac_bits_cnt);

	pow = Fixed::_two_power;

	if (1 == pow)
		return (0);
	for (cnt = 0; pow > 0; pow /= 10, cnt++);

	return (cnt);
}

int	Fixed::get_frac_decimals_cnt( void ) const
{
	return (_frac_decimals_cnt);
}

__int64_t	Fixed::compute_ten_power( void )
{
	__int64_t	res;
	int		cnt;

	for (res = 1, cnt = 0; cnt < _frac_decimals_cnt; ++cnt, res *= 10);
	return (res);
}

__int64_t	Fixed::get_ten_power( void ) const
{
	return (Fixed::_ten_power);
}
*/
///////////////////////////////////// end of we will see if we need it /////

std::ostream &	operator<<(std::ostream &os, Fixed const& num)
{
	os << num.toFloat();

	return (os);
}

float	Fixed::toFloat( void ) const
{
	float	res;

	res = this->_raw_int >> this->get_frac_bits_cnt();

	res += (float)((this->get_two_power() - 1) & this->getRawBits()) / this->get_two_power();

	return (res);
}

int	Fixed::toInt( void ) const
{
	return (roundf(this->toFloat()));
}
