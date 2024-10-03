/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:05:13 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 16:05:56 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &	_weapon;
		std::string	_name;

	public:
		HumanA(std::string const & name, Weapon & weapon);
		void	attack( void ) const;
};

#endif // HUMAN_A
