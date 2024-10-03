/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:42:33 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 20:07:13 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream> 

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal();
		WrongAnimal &	operator=(WrongAnimal const & src);

	public:
		std::string const & getType() const;
		void	setType(std::string const & type);

	public:
		virtual void	makeSound() const;
};

#endif // WRONGANIMAL_HPP
