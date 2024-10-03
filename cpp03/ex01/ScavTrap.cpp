/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:15:11 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 15:21:03 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::_init()
{
	this->set_health(100);
	this->set_energy(50);
	this->set_attack(20);
}

ScavTrap::ScavTrap() : ClapTrap("Sigmund")
{
	std::cout << "Default constructor of ScavTrap" << std::endl;
	this->_init();
}

ScavTrap::ScavTrap(std::string const & name) : 
			ClapTrap(name)
{
	std::cout << "Parametric constructor of ScavTrap" << std::endl;
	this->_init();
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	std::cout << "Copy constructor of ScavTrap" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "Assignment operator of ScavTrap" << std::endl;
	ClapTrap::operator=(src);
	// (ClapTrap)(*this) = (ClapTrap)(src); it creates new instances of ClapTrap, not what I want
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->get_name() << \
		" now in Gate keeper mode, whatever that means.\n";
	std::cout << "Here are details of " << \
		this->get_name() << ":" << *this << std::endl;
}

//////////////////////////////////////////////
void	ScavTrap::attack(std::string const& target)
{
	if (this->get_energy() > 0 && this->get_health() > 0)
	{
		std::cout << "ScavTrap " << this->get_name() << \
			" attacks " << target << ", causing " \
			<< this->get_attack() << " points of damage!\n";
		std::cout << "However, " << target << " is not a member of "\
			<< "ScavTrap class, so no damage was caused to him"\
			<< std::endl;
		this->decrease_energy();
		return ;
	}
	std::cout << "ScavTrap " << this->get_name() << \
			" wanted to attack " << \
			target << ", causing him " << this->get_attack() << \
			" points of damage, but had no energy or health"
			" points. Lucky " << target << "!" << std::endl;
}

void	ScavTrap::attack(ClapTrap & target)
{
	if (target.get_health() <= 0)
	{
		std::cout << "Everyone can hit the body of a deceased lion, "
				"but not in my watch." << std::endl;
		return ;
	}
	if (this->get_energy() > 0 && this->get_health() > 0)
	{
		std::cout << "ScavTrap " << this->get_name() << \
			" attacks " << target.get_name() << ", causing " \
			<< this->get_attack() << " points of damage!" \
			<< std::endl;
		this->decrease_energy();
		target.takeDamage(this->get_attack());
	}
}

void	ScavTrap::print(std::ostream & os) const
{
	os << "ScavTrap: " << this->get_name()
		<< "(" << this->get_health()
		<< ", " << this->get_energy()
		<< ", " << this->get_attack()
		<< ")";
}

std::ostream &	operator<<(std::ostream &os, ScavTrap const & obj)
{
	obj.print(os);
	return (os);
}
