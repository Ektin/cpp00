/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:28:52 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 20:35:16 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain &	Brain::operator=(Brain const & src)
{
	if (&src != this)
	{
		for (int i = 0; i < 100; ++i)
		{
			this->_ideas[i] = src._ideas[i];
		}
	}
	return (*this);
}

std::string const &	Brain::getIdea(int i) const
{
	if (i < 0 || i > 99)
	{
		static std::string	empty_string;

		empty_string = "";
		std::cout << "Index out of range in get_idea" << std::endl;

		return (empty_string);
	}
	return (this->_ideas[i]);
}

void	Brain::setIdea(int i, std::string const & idea)
{
	if (i < 0 || i > 99)
	{
		std::cout << "Index out of range in set_idea" << std::endl;
		return ;
	}
	this->_ideas[i] = idea;
}

