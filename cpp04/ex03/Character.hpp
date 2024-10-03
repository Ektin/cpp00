/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:50:55 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/16 15:15:10 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;

	private:
		void	_init();

	private:
		AMateria**	_inventories;	
		int		_curr_invent;

	private:		
		static int	_max_num_invents;

	public:
		int			getMaxNumInvents();

	public:
		Character();
		Character(std::string const & name);
		~Character();
		Character(Character const & src);
		Character &	operator=(Character const & src);

	public:
		void			setName(std::string const & name);
		std::string const &	getName() const;
		void			equip(AMateria * m);
		void			unequip(int idx);
		void			doUnequip(int idx, \
			AMateria **leftOvers, int *curr_index, int total);
		void			use(int idx, ICharacter & target);

	public:
		void	setInventories(int i, AMateria const * const src);
		AMateria* const &	 getInventories(int i) const;
};

#endif // CHARACTER_HPP
