/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:01:42 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 13:41:59 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		void	_init();

	public:
		ScavTrap();
		ScavTrap(std::string const& name);
		ScavTrap(ScavTrap const&);
		~ScavTrap();
		ScavTrap &	operator=(ScavTrap const &);

	public:
		void	guardGate();

	public:
		void	attack(std::string const & target);
		void	attack(ClapTrap & target);

	public:
		void	print(std::ostream & os) const;
};

std::ostream &	operator<<(std::ostream & os, ScavTrap const & obj);

#endif // SCAVTRAP_HPP
