/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:30:58 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 15:39:52 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
}

Weapon::Weapon( std::string const & type ):_type(type)
{
}

std::string const & Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string const & type)
{
	this->_type = type;
}
