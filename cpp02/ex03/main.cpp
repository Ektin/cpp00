/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:51:32 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/17 14:48:27 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://stackoverflow.com/questions/10067510/fixed-point-arithmetic-in-c-programming

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );
bool	strict_bsp( Point const& a, Point const& b, Point const& c, \
						Point const& point );

int	main( void )
{

	Point	pt(2, 3);
	Point	pt2 (pt.getx().toFloat() + 1, pt.gety().toFloat() + 1);
	Point	pt3 (pt.getx().toFloat() - 1, pt.gety().toFloat() + 1);
	Point	pt4 (pt.getx().toFloat() + 1, pt.gety().toFloat() - 0.9865);

	std::cout << "Points of the triangle:\n";
	std::cout << pt2 << pt3 << pt4 << std::endl;
	std::cout << "another point : " << pt << std::endl;

	std::cout << std::setw(16) << std::left <<  "inside " << ": " << bsp(pt2, pt3, pt4, pt) << std::endl;
	std::cout << "strictly inside : " << strict_bsp(pt2, pt3, pt4, pt) << std::endl;

	std::cout << "\nfull representation of the points:\n";
	pt.display();
	pt2.display();
	pt3.display();
	pt4.display();
	return (0);
}
