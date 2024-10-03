/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:51:19 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/14 17:17:12 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::_init()
{
	this->set_health(10);
	this->set_energy(10);
	this->set_attack(0);
}

ClapTrap::ClapTrap(): _name("Cago")
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	this->_init();
}

ClapTrap::ClapTrap(std::string const& name) : _name(name)
{
	std::cout << "Parametric ClapTrap constructor called" << std::endl;
	this->_init();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "Copy constructor ClapTrap called" << std::endl;
	*this = src;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const& src)
{
	std::cout << "Assignment operator ClapTrap called" << std::endl;
	if (this != &src)
	{
		this->set_name(src.get_name());
		this->set_attack(src.get_attack());
		this->set_energy(src.get_energy());
		this->set_health(src.get_health());
	}
	return (*this);
}

/////////////////////////////////////////////////////////

std::string const&	ClapTrap::get_name() const
{
	return (this->_name);
}

int	ClapTrap::get_attack() const
{
	return (this->_attack);
}

int	ClapTrap::get_energy() const
{
	return (this->_energy);
}

int	ClapTrap::get_health() const
{
	return (this->_health);
}

void	ClapTrap::set_name(std::string const& name)
{
	this->_name = name;
}

void	ClapTrap::set_attack(int attack)
{
	this->_attack = attack;
}

void	ClapTrap::set_energy(int energy)
{
	this->_energy = energy;
}

void	ClapTrap::set_health(int health)
{
	this->_health = health;
}

///////////////////////////////

void	ClapTrap::decrease_energy()
{
	--this->_energy;
}

/////////////////////////////////////////////////////////

void	ClapTrap::attack(std::string const& target)
{
	if (this->get_energy() > 0 && this->get_health() > 0)
	{
		std::cout << "ClapTrap " << this->get_name() << \
			" attacks " << target << ", causing " \
			<< this->get_attack() << " points of damage!\n";
		std::cout << "However, " << target << " is not a member of "\
			<< "ClapTrap class, so no damage was caused to him"\
			<< std::endl;
		this->decrease_energy();
		return ;
	}
	std::cout << "ClapTrap " << this->get_name() << \
			" wanted to attack " << \
			target << ", causing him " << this->get_attack() << \
			" points of damage, but had no energy or health"
			" points. Lucky " << target << "!" << std::endl;
}

void	ClapTrap::attack(ClapTrap & target)
{
	if (target.get_health() <= 0)
	{
		std::cout << "Everyone can hit the body of a deceased lion, "
				"but not in my watch." << std::endl;
		return ;
	}
	if (this->get_energy() > 0 && this->get_health() > 0)
	{
		std::cout << "ClapTrap " << this->get_name() << \
			" attacks " << target.get_name() << ", causing " \
			<< this->get_attack() << " points of damage!" \
			<< std::endl;
		this->decrease_energy();
		target.takeDamage(this->get_attack());
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
		amount = 0;
	std::cout << "ClapTrap " << this->get_name() << " took damage of size "\
		 << amount;
	this->_health -= amount;
	if (this->_health <= 0)
	{
		std::cout << ", and subsequently died.\nCest jeho pamatce."\
				<< std::endl;
		this->_health = 0;
	}
	std::cout << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->get_energy() > 0 && this->get_health() > 0)
	{
		std::cout << "ClapTrap " << this->get_name() << \
			" is being repaired by " \
			<< amount << " points!" << std::endl;
		if (amount < 0)
			amount = 0;
		this->_health += amount;
		this->decrease_energy();
		return ;
	}
	std::cout << "ClapTrap " << this->get_name() << \
		" wanted to be repaired by " \
		<< amount << " points, but had no energy or hit points."
		" Unlucky " << this->get_name() << "!" << std::endl;
	return ;
}

void	ClapTrap::print(std::ostream &os) const
{
	os << "\n---------------------------\n| " << this->get_name() << ", has:\n" \
		<< std::setw(20) << std::left << "| health " << " : " << this->get_health () \
		<< std::setw(21) << std::left << "\n| energy " << " : " << this->get_energy() \
		<< std::setw(21) << std::left << "\n| attack " << " : " << this->get_attack() \
		<< "\n---------------------------\n" << std::endl;
}

std::ostream &	operator<<(std::ostream & os, ClapTrap const& clap)
{
	clap.print(os);
	return (os);
}
