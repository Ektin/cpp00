/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:07:59 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/08 19:01:47 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie( void );
		Zombie(std::string name);
		~Zombie( void );
		void	announce( void );
		void	set_name( std::string & name );
};

#endif // ZOMBIE_HPP
