/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:42:33 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 20:22:39 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream> 
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;

	private:
		Brain *	_brain;

	public:
		Animal();
		Animal(Animal const & src);
		virtual ~Animal();
		Animal &	operator=(Animal const & src);

	public:
		Brain * const & getBrain() const;
		std::string const & getType() const;

		void	setBrainIdea(int i, std::string const & idea);
		void	setType(std::string const & type);

	public:
		virtual void	makeSound() const;
};

#endif // ANIMAL_HPP
