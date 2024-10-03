/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:16:33 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/16 12:57:06 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	this->setType("ice");
}

Ice::~Ice()
{
}

Ice::Ice(Ice const & src) : AMateria()
{
	*this = src;
}

Ice &	Ice::operator=(Ice const & src)
{
	if (this != &src)
	{
		this->setType(src.getType());
	}
	return (*this);
}

Ice*	Ice::clone() const
{
	Ice*	res;

	res = new Ice(*this);
	if (!res)
		std::cerr << "Error: unable to Ice::clone()" << std::endl;
	return (res);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " 
		<< target.getName() 
		<< " *" << std::endl;
	return ;
}
