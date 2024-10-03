/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:15:11 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 15:20:39 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::_init()
{
	this->set_health(100);
	this->set_energy(100);
	this->set_attack(30);
}

FragTrap::FragTrap() : ClapTrap("Frederico")
{
	std::cout << "Default constructor of FragTrap" << std::endl;
	this->_init();
}

FragTrap::FragTrap(std::string const & name) : 
			ClapTrap(name)
{
	std::cout << "Parametric constructor of FragTrap" << std::endl;
	this->_init();
}

FragTrap::FragTrap(FragTrap const& src)
{
	std::cout << "Copy constructor of FragTrap" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & src)
{
	std::cout << "Assignment operator of FragTrap" << std::endl;
	ClapTrap::operator=(src);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->get_name() << \
		" makes a positive high fives request, whatever that means.\n";
	/* std::cout << "Here are details of " << \
		this->get_name() << ":" << *this << std::endl; */
}

void	FragTrap::print(std::ostream & os) const
{
	os << "FragTrap: " << this->get_name();
}	

std::ostream &	operator<<(std::ostream & os, FragTrap const & obj)
{
	obj.print(os);
	return (os);
}
