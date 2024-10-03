/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:24:54 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 23:52:39 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria &	AMateria::operator=(AMateria const & src)
{
	if (&src != this)
	{
	}
	return (*this);
}

void	AMateria::setType(std::string const & type)
{
	this->_type = type;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter & target)
{
	(void) target;
	std::cerr << "Error: This should never happen: "
		"AMateria::use, since no object of AMateria "
		"could be created" << std::endl;
	return ;
}
