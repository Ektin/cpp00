/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:58:05 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/17 13:53:43 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point( void );	
		Point( float x, float y );
		Point( Point const& src );
		~Point( void );

	private:
		Point&	operator=( Point const& src );

	public:
		Fixed const &	getx( void ) const;
		Fixed const &	gety( void ) const;

	private:
		void		setx( Fixed &fix );
		void		sety( Fixed &fix );

	public:
		void		display( void ) const;

};

std::ostream &	operator<<(std::ostream &os, Point const & obj);

#endif // POINT_HPP
