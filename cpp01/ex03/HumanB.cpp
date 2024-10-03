/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:40:36 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 15:57:07 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanB::HumanB( std::string const & name ):_name(name)
{
}

void	HumanB::setWeapon( Weapon & weapon )
{
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack( void ) const
{
	std::cout << this->_name << " attacks with their weapon ";
	std::cout << this->_weapon->getType() << "\n";
}
