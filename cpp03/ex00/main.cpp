/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:59:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/14 17:15:21 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	clap, clap2(clap);
	ClapTrap	clap3("ClA");
	

	std::cout << clap;
	clap.attack("someone");
	std::cout << clap;
	clap.takeDamage(2);
	std::cout << clap;
	clap.beRepaired(10);
	std::cout << clap;

	clap3.attack(clap);
	clap3.attack(clap);

	std::cout << clap;
	std::cout << clap3;

	return (0);
}
