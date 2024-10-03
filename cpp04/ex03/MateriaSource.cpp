/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:37:15 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/16 15:36:16 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _materies()
{
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		delete _materies[i];
		_materies[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & src)
{
	if (&src != this)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete _materies[i];
			_materies[i] = src._materies[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria * materia)
{
	if (!materia)
	{
		std::cerr << "Error: NULL materia in learnMateria" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; ++i)
	{
		if (_materies[i] == NULL)
		{
			_materies[i] = materia->clone();
			break;
		}
	}
	delete (materia);
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	AMateria	*res;

	res = NULL;

	for (int i = 0; i < 4; ++i)
	{
		if (_materies[i] && _materies[i]->getType() == type)
		{
			res = _materies[i]->clone();
			break;
		}
	}
	return (res);
}
	/* what is below depends on ice, cure explicitly, 
		so if new materias appear, the code should be modified
	*/
	/*res = NULL;
	if ("ice" == type)
	{
		res = new Ice();
	}
	else if ("cure" == type)
	{
		res = new Cure();
	}
	return (res);*/
