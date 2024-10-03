/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:07:10 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 19:04:35 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::_init()
{
	FragTrap	frag;
	ScavTrap	scav;

	this->set_health(frag.get_health());
	this->set_energy(scav.get_energy());
	this->set_attack(frag.get_attack());

	this->DiamondTrap::set_name(this->ClapTrap::get_name());
	this->ClapTrap::set_name(this->DiamondTrap::get_name() + "_clap_name");
}

DiamondTrap::DiamondTrap() : ClapTrap("Didona")
{
	std::cout << "Default constructor DiamondTrap" << std::endl;
	
	this->_init();
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap(name)
{
	std::cout << "Parametric constructor DiamondTrap" << std::endl;
	this->_init();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "Copy constructor DiamondTrap" << std::endl;
	*this = src;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & src)
{
	std::cout << "Assignment operator DiamondTrap" << std::endl;	
	ScavTrap::operator=(src);
	return (*this);
}

//////////////////////////

void	DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "whoAmI: ";
	std::cout << this->DiamondTrap::get_name() << "; " << this->ClapTrap::get_name();
	std::cout << std::endl; 
}

/////////////////////////

std::string	const & DiamondTrap::get_name(void) const
{
	return (this->_name);
	return (this->DiamondTrap::_name);
}

void	DiamondTrap::set_name(std::string const & name)
{
	this->DiamondTrap::_name = name;
	this->_name = name;
}

void	DiamondTrap::print(std::ostream & os) const
{
	os << "DiamondTrap: " << this->get_name()
	<< " (" << this->get_health()
	<< "; " << this->get_energy()
	<< "; " << this->get_attack()
	<< ")";
}

std::ostream &	operator<<(std::ostream & os, DiamondTrap const & obj)
{
	obj.print(os);
	return (os);
}
