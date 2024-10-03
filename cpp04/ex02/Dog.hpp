/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:01:12 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 21:08:28 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();
		Dog &	operator=(Dog const & src);

	public:
		void	makeSound() const;
};

#endif // DOG_HPP
