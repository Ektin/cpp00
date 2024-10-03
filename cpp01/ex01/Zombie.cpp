/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:07:32 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/08 19:02:35 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void )
{
}

Zombie::Zombie(std::string name):_name(name){}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " wishes you all the best before passing to the other world.\n";
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name( std::string & name )
{
	this->_name = name;
}
