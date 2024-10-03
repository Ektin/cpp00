/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:16:33 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/16 13:42:57 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://stackoverflow.com/questions/21139723/warning-base-class-should-be-explictily-initialized-in-the-copy-constructor
*/
/* https://cpp.forum24.ru/?1-1-0-00000021-000-0-0-1388485669 */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	this->setType("cure");
}

Cure::~Cure()
{
	this->setType("");
}

Cure::Cure(Cure const & src) : AMateria()
{
	*this = src;
}

Cure &	Cure::operator=(Cure const & src)
{
	if (this != &src)
	{
		this->setType(src.getType());
	}
	return (*this);
}

Cure*	Cure::clone() const
{
	Cure*	res;

	res = new Cure(*this);
	if (NULL == res)
		std::cerr << "Error: Unable to Cure::clone()" << std::endl;	
	return (res);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " 
		<< target.getName() 
		<< "'s wounds *" << std::endl;
	return ;
}
