/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:47:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 20:09:49 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	this->setType("Cat");
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;	
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat &	Cat::operator=(Cat const & src)
{
	std::cout << "Cat assignment operator" << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meaoww" << std::endl;
}
