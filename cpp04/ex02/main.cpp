/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:53:16 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 21:12:27 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://stackoverflow.com/questions/28275246/returning-reference-to-local-temporary-object
*/

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	if (0 == 1)
	{
		const AAnimal * j = new Dog();
		const AAnimal * i = new Cat();

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
	if (2 == 2)
	{
		Cat	an;

		std::cout << an.getBrain() << std::endl;
		an.setBrainIdea(1, "Good idea");
		std::cout << an.getBrain()->getIdea(1) << std::endl;

		Cat an2;
		an2 = an;
		
		Cat an3(an);

		an.setBrainIdea(1, "Another good idea");
		std::cout << an2.getBrain()->getIdea(1) << std::endl;
		std::cout << an3.getBrain()->getIdea(1) << std::endl;

	}
	if (3 == 3)
	{
		AAnimal	*an[10];
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

		AAnimal * anim;
		anim = NULL;
		std::cout << anim;
		anim = new Cat [10];
		delete [] anim;
		anim = NULL;
		std::cout << anim;
	}
	
	return (0);
}
