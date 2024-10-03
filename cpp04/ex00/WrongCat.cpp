/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:47:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 20:07:52 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = src;	
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & src)
{
	std::cout << "WrongCat assignment operator" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meaoww" << std::endl;
}
