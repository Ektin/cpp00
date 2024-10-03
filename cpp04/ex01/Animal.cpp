/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:47:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 21:00:29 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type(""), _brain(NULL)
{
	std::cout << "Animal default constructor" << this->_type << ";"<< std::endl;
	this->_brain = new Brain();
}

Animal::Animal(Animal const & src) : _brain(NULL)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
	//this->_brain = new Brain(*(src.getBrain())); // not needed, since assignment operator is called
	// but at which point _brain is created in the call Animal an2(an);
	// what is created is a pointer to brain
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
	delete (this->_brain);
	this->_brain = NULL;
}

Animal &	Animal::operator=(Animal const & src)
{
	std::cout << "Animal assignment operator" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
		delete (this->_brain);
		this->_brain = new Brain(*src.getBrain());
	}
	return (*this);
}

Brain * const &	Animal::getBrain() const
{
	return (this->_brain);
}

std::string const &	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setBrainIdea(int i, std::string const & idea)
{
	this->_brain->setIdea(i, idea);
}

void	Animal::setType(std::string const & type)
{
	this->_type = type;
}

void	Animal::makeSound() const
{
}
