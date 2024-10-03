/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:01:42 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 13:45:02 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
		void	_init();

	public:
		FragTrap();
		FragTrap(std::string const& name);
		FragTrap(FragTrap const&);
		~FragTrap();
		FragTrap &	operator=(FragTrap const &);

	public:
		void	highFivesGuys();

	public:
		void	print(std::ostream & os) const;
};

std::ostream &	operator<<(std::ostream & os, FragTrap const & obj);

#endif // FRAGTRAP_HPP
