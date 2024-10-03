/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:27:30 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/16 15:56:14 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iomanip>

int	main()
{
	if (0 == 1)
	{
		Character	ch;
		Character	ch2(ch);
		Character	ch3;
		ch3 = ch2;	
	}

	AMateria *leftOverMaterials[128];
	int		curr_index = 0;
	for (int i = 0; i < 128; ++i)
		leftOverMaterials[i] = NULL;

	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter * me = new Character("me");

	AMateria * tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = NULL;
	dynamic_cast <Character *>(me)->doUnequip(-1, leftOverMaterials, &curr_index, 128);
	
	ICharacter * bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(22, *bob);

	delete (bob);
	bob = NULL;
	delete (me);
	me = NULL;
	delete (src);
	src = NULL;

	for (int i = 0; i < 128; ++i)
	{
		delete leftOverMaterials[i];
		leftOverMaterials[i] = NULL;
	}	

	return (0);
}
