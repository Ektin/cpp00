/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:53:16 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 21:03:45 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://stackoverflow.com/questions/28275246/returning-reference-to-local-temporary-object
*/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	if (0 != 0)
	{
		const Animal * j = new Dog();
		const Animal * i = new Cat();

		delete j;
		delete i;
	}

	if (1 == 0)
	{
		Brain	b1;

		b1.setIdea(0, "Good idea");

		Brain	b2;
		b2 = b1;

		b1.setIdea(0, "A new good idea");

		std::cout << b2.getIdea(0);
	}
	if (2 == 0)
	{
		Animal	an;

		std::cout << an.getBrain() << std::endl;
		an.setBrainIdea(1, "Good idea");
		std::cout << an.getBrain()->getIdea(1) << std::endl;

		Animal an2;
		an2 = an;
		
		Animal an3(an);

		an.setBrainIdea(1, "Another good idea");
		std::cout << an2.getBrain()->getIdea(1) << std::endl;
		std::cout << an3.getBrain()->getIdea(1) << std::endl;

	}
	if (3 == 4)
	{
		Animal	*an[10];
		for (int i = 0; i < 10; ++i)
		{
			if (i % 2 == 0)
				 an[i] = new Cat();
			else
				an[i] = new Dog();
		}
		//delete [] an;
		for (int i = 0; i < 10; ++i)
		{
			delete an[i];
			an[i] = NULL;
		}

		std::cout << std::endl << std::endl << std::endl;

		Animal * anim;
		anim = NULL;
		std::cout << anim;
		anim = new Cat [10];
		delete [] anim;
		anim = NULL;
		std::cout << anim;
	}

	if (4 == 4)
	{
		Animal	*anptr1 = new Cat();

		anptr1->setBrainIdea(0, "Cats are good");
		anptr1->setBrainIdea(1, "Cats are gods");

		std::cout << anptr1->getBrain()->getIdea(1) << std::endl;

		//Cat cat2 = *(Cat *)anptr1;
		Animal cat2 = *(Cat *)anptr1;
		anptr1->setBrainIdea(1, "Cats are more than gods");
		std::cout << "Rien?:" << cat2.getBrain()->getIdea(1) << std::endl;

		delete anptr1;

		Dog dog3;
	}

	return (0);
}
