/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:47:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 20:04:15 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	this->setType("Dog");
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;	
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog &	Dog::operator=(Dog const & src)
{
	std::cout << "Dog assignment operator" << std::endl;
	if (this != &src)
	{
		this->setType(src.getType());
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Av-Av" << std::endl;
}
