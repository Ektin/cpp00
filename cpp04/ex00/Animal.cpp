/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:47:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 20:04:51 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;	
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal &	Animal::operator=(Animal const & src)
{
	std::cout << "Animal assignment operator" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return (*this);
}

std::string const &	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(std::string const & type)
{
	this->_type = type;
}

void	Animal::makeSound() const
{
}
