/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:44:06 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 15:11:38 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*https://stackoverflow.com/questions/3747066/c-cannot-convert-from-base-a-to-derived-type-b-via-virtual-base-a
*/

#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap	*b = new ScavTrap();
	ClapTrap	*a = new DiamondTrap();

	if (0 == 1)
	{
		FragTrap c = *dynamic_cast <FragTrap *>(a);
		ScavTrap d = *dynamic_cast <ScavTrap *>(a);
		ClapTrap e = *dynamic_cast <ClapTrap *>(a);

		std::cout << *a << " und " << *dynamic_cast<FragTrap *>(a)
			<< " and " << c << " ind " << d << " si " << e 
			<< std::endl;
	}

	if (1 == 2)
	{
		std::cout << "\nBefore printing\n";
		std::cout << *a << std::endl;
		//std::cout << (FragTrap )*dynamic_cast <FragTrap *>(a) << std::endl;
		dynamic_cast<ClapTrap *>(a)->ClapTrap::print(std::cout);
		std::cout << std::endl;
		dynamic_cast<FragTrap *>(a)->FragTrap::print(std::cout);
		std::cout << std::endl;
		dynamic_cast<ScavTrap *>(a)->ScavTrap::print(std::cout);
		std::cout << "\nAfter printing\n" << std::endl;
	}
	
	a->attack("someone");
	a->attack(*b);
	dynamic_cast<DiamondTrap *>(a)->whoAmI();
	if (0)
	{
		dynamic_cast<DiamondTrap *>(b)->whoAmI();
	}
	delete a;
	delete b;
	return (0);
}
