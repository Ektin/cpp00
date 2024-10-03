/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:59:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 15:28:01 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	clap;
	clap.set_name("Sergo");
	std::cout << "clap : " << clap << std::endl;

	ScavTrap	clap2(clap);
	std::cout << "clap2 : " << clap2 << std::endl;

	ScavTrap	clap3("Miwa");
	std::cout << "clap3 : " << clap3 << std::endl;


	clap3.guardGate();

	std::cout << clap << std::endl;
	clap.attack("someone");
	std::cout << clap << std::endl;
	clap.takeDamage(2);
	std::cout << clap << std::endl;
	clap.beRepaired(10);
	std::cout << clap << std::endl;

	return (0);
}
