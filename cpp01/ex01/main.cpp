/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:11:59 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 08:34:06 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
//#include <stdlib.h>

Zombie*	zombieHorde( int N, std::string );

int	main( void )
{
	Zombie*	zomptr;
	int	n;

	n = 4;

	zomptr = zombieHorde(n, "Diogen");
	for (int i = 0; i < n; ++i)
	{
		zomptr[i].announce();
	}

	delete [] zomptr;
	return (0);
}
