/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:35:44 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/16 15:37:12 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materies[4]; 

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const & src);
		MateriaSource &	operator=(MateriaSource const & src);

	public:
		void		learnMateria(AMateria *);
		AMateria*	createMateria(std::string const &);
};

#endif // MATERIASOURCE_HPP
