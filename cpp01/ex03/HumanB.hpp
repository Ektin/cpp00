/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:35:53 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 16:07:54 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *	_weapon;
		std::string	_name;
	public:
		HumanB( std::string const & name );
		void	setWeapon( Weapon & weapon );
		void	attack( void ) const;
		
};

#endif // HUMAN_B
