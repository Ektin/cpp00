/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:42:33 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 21:34:41 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream> 
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string	_type;

	private:
		Brain *	_brain;

	protected:
		AAnimal();
		AAnimal(AAnimal const & src);
		AAnimal &	operator=(AAnimal const & src);
	public:
		virtual ~AAnimal();

	public:
		Brain * const & getBrain() const;
		std::string const & getType() const;

		void	setBrainIdea(int i, std::string const & idea);
		void	setType(std::string const & type);

	public:
		virtual void	makeSound() const = 0;
};

#endif // AANIMAL_HPP
