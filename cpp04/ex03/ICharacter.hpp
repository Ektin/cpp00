/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:17:17 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/16 11:04:54 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*https://stackoverflow.com/questions/37040693/c-why-is-there-unknown-type-when-class-header-is-included
*/

/* unknown type name:
https://stackoverflow.com/questions/37040693/c-why-is-there-unknown-type-when-class-header-is-included
*/

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

typedef class ICharacter
{
	public:
		virtual ~ICharacter() {};
		virtual std::string const &	getName() const = 0;
		virtual void			equip(class AMateria * m) = 0;
		virtual void			unequip(int idx) = 0;
		virtual void		use(int idx, ICharacter & target) = 0;
} ICharacter;

#endif // ICHARACTER_HPP
