/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:52:15 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/16 16:04:42 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int	Character::_max_num_invents = 4;

int		Character::getMaxNumInvents()
{
	return (_max_num_invents);
}

void	Character::_init()
{
	this->_inventories = new AMateria* [_max_num_invents];
	if (!this->_inventories)
	{
		std::cerr << "Error: failed Character::_init()" << std::endl;
		return ;
	}
	for (int i = 0; i < _max_num_invents; ++i)
		this->_inventories[i] = NULL;
}

Character::Character() : _inventories(NULL), _curr_invent(0)
{
	//std::cout << "Default constructor Character" << std::endl;
	this->_init();
	//std::cout << "Default constructor Character end" << std::endl;
}

Character::Character(Character const & src) : 
		_inventories(NULL), 
		_curr_invent(0)
{
	//std::cout << "Copy constructor Character" << std::endl;
	*this = src;
	//std::cout << "Copy constructor Character end" << std::endl;
}

Character::Character(std::string const & name) : 
		_name(name),
		_inventories(NULL),
		_curr_invent(0)
{
	//std::cout << "Parametric constructor Character" << std::endl;
	this->_init();
	//std::cout << "Parametric constructor Character end" << std::endl;
}

Character::~Character()
{
	//std::cout << "Destructor Character" << std::endl;
	if (!_inventories)
		return ;
	for (int i = 0; i < _max_num_invents; ++i)
	{
		delete (this->_inventories[i]);
		this->_inventories[i] = NULL;
	}
	delete [] _inventories; 
	//std::cout << "Destructor Character end" << std::endl;
}

Character &	Character::operator=(Character const & src)
{
	//std::cout << "Assignment operator Character" << std::endl;
	if (this != &src)
	{
		this->setName(src.getName());
		this->_curr_invent = src._curr_invent;

		if (NULL == this->_inventories)
			this->_init();
		for (int i = 0; i < _max_num_invents; ++i)
		{
			this->setInventories(i, src.getInventories(i));
		}
	}
	//std::cout << "Assignment operator Character end" << std::endl;
	return (*this);
}

//////////////////////////////

void	Character::setInventories(int i, AMateria const * const src)
{
	if (i < 0 || i > _max_num_invents)
	{
		std::cerr << "Error: out of range in "
			"Character::setInventories" << i << std::endl;
		return ;
	}
	if (!_inventories)
	{
		std::cerr << "Error: NULL _inventories in "
			"Character::setInventories" << std::endl;
		return ;
	}
	if (_inventories[i] != NULL)
	{
		delete (_inventories[i]);
		_inventories[i] = NULL;
	}
	if (src == NULL)
	{
		_inventories[i] = NULL;
		return ;
	}
	_inventories[i] = src->clone(); 
}

AMateria* const &	Character::getInventories(int i) const
{
	if (i < 0 || i > _max_num_invents)
	{
		std::cerr << "Error: out of range in "
			"Character::getInventories" << i << std::endl;
		static	AMateria *	null_ptr;
		null_ptr = NULL;

		return (null_ptr);
	}
	if (!_inventories)
	{
		std::cerr << "Error: NULL _inventories in "
			"Character::getInventories" << std::endl;
		static	AMateria *	null_ptr;
		null_ptr = NULL;
		
		return (null_ptr);
	}
	return (_inventories[i]);
}

////////////////////////////

void	Character::setName(std::string const & name)
{
	this->_name = name;
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(class AMateria * m)
{
	int	index;

	for (int i = 0; i < _max_num_invents; ++i)
	{
		index = (i + _curr_invent) % _max_num_invents; 
		if (NULL == this->getInventories(index))
		{
			this->setInventories(index, m);
			delete m;
			m = NULL;
			_curr_invent = (1 + _curr_invent) % _max_num_invents;
			break ;
		}
	}
	delete m;
}

void	Character::unequip(int idx)
{
	(void)idx;
	if (idx < 0 || idx > _max_num_invents)
		return ;
	_inventories[idx] = NULL;
}

void	Character::doUnequip(int idx, AMateria **leftOvers, \
				int *curr_index, int total)
{
	if (idx < 0 || idx > _max_num_invents)
		return ;
	if (NULL == _inventories[idx])
		return ;
	if (*curr_index == total)
	{
		for (int i = 0; i < total; ++i)
		{
			delete leftOvers[i];
			leftOvers[i] = NULL;
		}
		*curr_index = 0;
	}
	leftOvers[*curr_index] = _inventories[idx];
	++(*curr_index);
	this->unequip(idx);
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > _max_num_invents)
		return ;
	if (dynamic_cast<Character &>(*this)._inventories[idx])
	{
		dynamic_cast<Character &>(*this)._inventories[idx]->use(target);
	}
}
