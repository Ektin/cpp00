/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:07:28 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 15:48:07 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string const & name,
		Weapon & weapon): 
					_weapon(weapon),
					_name(name)
{
}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with their weapon ";
	std::cout << this->_weapon.getType() << "\n"; 
}
