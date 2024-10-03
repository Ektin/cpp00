/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:17:17 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/16 12:40:42 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	
	protected:
		void	setType(std::string const & type);

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const & src);
		AMateria(std::string const & type);
		AMateria & operator=(AMateria const & src);

	public:
		std::string const &	getType() const;

		virtual AMateria *	clone() const = 0;
		virtual void		use(class ICharacter & target);
};

#endif // AMATERIA_HPP
