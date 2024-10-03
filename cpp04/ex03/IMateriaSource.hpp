/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:33:11 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 23:57:20 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {}
		virtual void	learnMateria(AMateria *) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif // IMATERIASOURCE_HPP
