/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:11:59 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 08:18:03 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
//#include <stdlib.h>

Zombie*	newZombie( std::string );
void	randomChump( std::string );

int	main( void )
{
	Zombie*	zomptr;

	zomptr = newZombie("Spartak");
	zomptr->announce();
	randomChump("Leon");

	delete (zomptr);
	return (0);
}
