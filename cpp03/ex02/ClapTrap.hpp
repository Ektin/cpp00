/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:46:42 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 14:07:39 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP 

#include <iostream>
#include <iomanip>

class ClapTrap
{
	private:
		std::string	_name;
		int		_health;
		int		_energy;
		int		_attack;

	private:
		virtual void	_init();

	public:
		ClapTrap();
		ClapTrap(std::string const& name);
		virtual	~ClapTrap();
		ClapTrap(ClapTrap const& src);
		ClapTrap&	operator=(ClapTrap const& src);

	public:
		virtual void	attack(const std::string & target);	
		virtual void	attack(ClapTrap &target);	
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	public:
		virtual	std::string const&	get_name(void) const;
		int			get_attack() const;
		int			get_energy() const;
		int			get_health() const;
	
	public:
		void			set_name(std::string const&);
		void			set_attack(int);
		void			set_energy(int);
		void			set_health(int);

	public:
		void			decrease_energy();

	public:
		virtual void		print(std::ostream & os) const;
};

std::ostream &	operator<<(std::ostream & os, ClapTrap const& clap);

#endif // CLAPTRAP_HPP
