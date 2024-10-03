/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:10:29 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/17 13:23:51 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// true if a,b lies on the same side of the line (p1, p2)
// if someone is on the border, still good
static	bool	same_side(Point p1, Point p2, Point a, Point b)
{
	Fixed	ka;
	Fixed	kb;

	if (p1.getx() == p2.getx())
	{
		if (a.getx() > p1.getx())
			return (b.getx() >= p1.getx());
		if (a.getx() < p1.getx())
			return (b.getx() <= p1.getx());
		return (true);
	}
	if (p1.gety() == p2.gety())
	{
		if (a.gety() > p1.gety())
			return (b.gety() >= p1.gety());
		if (a.gety() < p1.gety())
			return (b.gety() <= p1.gety());
		return (true);
	}
	ka = (a.getx() - p1.getx()) / (p2.getx() - p1.getx()) - (a.gety() - p1.gety()) / (p2.gety() - p1.gety());
	kb = (b.getx() - p1.getx()) / (p2.getx() - p1.getx()) - (b.gety() - p1.gety()) / (p2.gety() - p1.gety());

	if (ka > 0)
		return (kb >= 0);
	if (ka < 0)
		return (kb <= 0);
	return (true);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	if (!same_side(a, b, c, point))
		return (false);
	if (!same_side(a, c, b, point))
		return (false);
	if (!same_side(b, c, a, point))
		return (false);
	return (true);
}

// true if a,b lie strictly on the same side of the line (p1, p2)
// if someone is on the border, notok
static	bool	strictly_same_side(Point p1, Point p2, Point a, Point b)
{
	Fixed	ka;
	Fixed	kb;

	if (p1.getx() == p2.getx())
	{
		if (a.getx() > p1.getx())
			return (b.getx() > p1.getx());
		if (a.getx() < p1.getx())
			return (b.getx() < p1.getx());
		return (false);
	}
	if (p1.gety() == p2.gety())
	{
		if (a.gety() > p1.gety())
			return (b.gety() > p1.gety());
		if (a.gety() < p1.gety())
			return (b.gety() < p1.gety());
		return (false);
	}
	ka = (a.getx() - p1.getx()) / (p2.getx() - p1.getx()) - (a.gety() - p1.gety()) / (p2.gety() - p1.gety());
	kb = (b.getx() - p1.getx()) / (p2.getx() - p1.getx()) - (b.gety() - p1.gety()) / (p2.gety() - p1.gety());

	if (ka > 0)
		return (kb > 0);
	if (ka < 0)
		return (kb < 0);
	return (false);
}

bool	strict_bsp( Point const& a, Point const& b, Point const& c, \
						Point const& point )
{
	if (!strictly_same_side(a, b, c, point))
		return (false);
	if (!strictly_same_side(a, c, b, point))
		return (false);
	if (!strictly_same_side(b, c, a, point))
		return (false);
	return (true);
}
