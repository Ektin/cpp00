/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:59:34 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 15:29:56 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	clap;
	clap.set_name("Fredo");
	std::cout << "clap : " << clap << std::endl;

	FragTrap	clap2(clap);
	std::cout << "clap2 : " << clap2 << std::endl;

	FragTrap	clap3("Miwa");
	std::cout << "clap3 : " << clap3 << std::endl;


	clap3.highFivesGuys();

	std::cout << clap << std::endl;
	clap.attack("someone");
	std::cout << clap << std::endl;
	clap.takeDamage(2);
	std::cout << clap << std::endl;
	clap.beRepaired(10);
	std::cout << clap << std::endl;

	clap = clap3;
	clap.highFivesGuys();

	return (0);
}
