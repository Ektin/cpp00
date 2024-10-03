/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:02:30 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/17 14:47:46 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x( 0 ), _y( 0 )
{
}

Point::Point( float x, float y):
		_x( x ),
		_y( y )
{
}

Point::Point( Point const& src ):
	_x( src._x ),
	_y( src._y )
{
}

Point::~Point( void )
{
}

Point &	Point::operator=( Point const& src )
{
	if (this == &src)
		return (*this);
	std::cout << "ERROR: copy assignment operator with const member variables\n";
	return (*this);
}

Fixed const &	Point::getx( void ) const
{
	return (_x);
}

void	Point::setx( Fixed & fix )
{
	(void) fix;
	std::cout << "Error: not possible to set for a const member\n";
}

Fixed const &	Point::gety( void ) const
{
	return (_y);
}

void	Point::sety( Fixed & fix )
{
	(void) fix;
	std::cout << "Error: not possible to set for a const member\n";
}

std::ostream &	operator<<(std::ostream &os, Point const & pt)
{
	os << "(" << pt.getx() << ", " << pt.gety() << ")";
	
	return (os);
}

void	Point::display( void ) const
{
	std::cout << "(";
	this->getx().display();
	std::cout << ", ";
	this->gety().display();
	std::cout << ")\n";
}
