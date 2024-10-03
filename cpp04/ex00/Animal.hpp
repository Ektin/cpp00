/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:42:33 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 20:04:33 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream> 

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(Animal const & src);
		virtual ~Animal();
		Animal &	operator=(Animal const & src);

	public:
		std::string const & getType() const;
		void	setType(std::string const & type);

	public:
		virtual void	makeSound() const;
};

#endif // ANIMAL_HPP
