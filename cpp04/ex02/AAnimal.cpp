/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:47:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 21:35:56 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type(""), _brain(NULL)
{
	std::cout << "AAnimal default constructor" << this->_type << ";"<< std::endl;
	this->_brain = new Brain();
}

AAnimal::AAnimal(AAnimal const & src) : _brain(NULL)
{
	std::cout << "AAnimal copy constructor" << std::endl;
	*this = src;
	//this->_brain = new Brain(*(src.getBrain())); // not needed, since assignment operator is called
	// but at which point _brain is created in the call AAnimal an2(an);
	// what is created is a pointer to brain
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor" << std::endl;
	delete (this->_brain);
	this->_brain = NULL;
}

AAnimal &	AAnimal::operator=(AAnimal const & src)
{
	std::cout << "AAnimal assignment operator" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
		delete (this->_brain);
		this->_brain = new Brain(*src.getBrain());
	}
	return (*this);
}

Brain * const &	AAnimal::getBrain() const
{
	return (this->_brain);
}

std::string const &	AAnimal::getType() const
{
	return (this->_type);
}

void	AAnimal::setBrainIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}

void	AAnimal::setType(std::string const & type)
{
	this->_type = type;
}
