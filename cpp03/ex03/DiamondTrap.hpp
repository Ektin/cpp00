/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:32:02 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 14:32:13 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://github.com/nuna123/cpp/blob/main/cpp_03/ex03/DiamondTrap.hpp

// https://stackoverflow.com/questions/18515183/c-overloaded-virtual-function-warning-by-clang

//https://stackoverflow.com/questions/4571611/making-operator-virtual

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		void	_init();

	private:
		std::string	_name;
	
	public:
		void	attack(std::string const & target);

	public:
		void	whoAmI();

	public:
		DiamondTrap();
		DiamondTrap(std::string const & name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap &	operator=(DiamondTrap const &src);

	public:
		std::string const &	get_name(void) const;
		void			set_name(std::string const & name);

	public:
		void	print(std::ostream & os) const;
};

std::ostream &	operator<<(std::ostream & os, DiamondTrap const & obj);

#endif // DIAMONDTRAP_HPP
