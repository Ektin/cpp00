/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:37:28 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 08:55:10 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main( void )
{
	std::string	str;
	std::string &	stringREF = str;
	std::string *	stringPTR;

	stringPTR = &str;
	str = "HI THIS IS BRAIN";

	
	std::cout << std::setw(32) << std::left << "address of string by string: " << &str << std::endl;
	std::cout << std::setw(32) << std::left << "address of string by reference: " << &stringREF << std::endl;
	std::cout << std::left << std::setw(32) << "address of string by pointer:" << stringPTR << std::endl << std::endl;
	
	std::cout << std::setw(21) << std::left << "string by string: " << str << std::endl;
	std::cout << std::left << std::setw(21) << "string by reference: " << stringREF << std::endl;
	std::cout << std::left << std::setw(21) << "string by pointer:" << *stringPTR << "\n";

	return (0);
}
