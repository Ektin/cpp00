/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:26:20 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 16:03:17 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returning const reference to std::string 
https://stackoverflow.com/questions/13507698/return-stdstring-as-const-reference
*/

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon( void );
		Weapon( std::string const & type );
		std::string const & getType( void ) const;
		void	setType(const std::string & type);
};

#endif // WEAPON_HPP
