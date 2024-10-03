/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:01:12 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 16:20:25 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & src);
		~Cat();
		Cat &	operator=(Cat const & src);

	public:
		void	makeSound() const;
};

#endif // CAT_HPP
