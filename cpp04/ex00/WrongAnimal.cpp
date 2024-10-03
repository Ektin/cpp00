/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:47:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 20:07:36 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = src;	
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & src)
{
	std::cout << "WrongAnimal assignment operator" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return (*this);
}

std::string const &	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string const & type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound() const
{
}
