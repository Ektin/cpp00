/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:58:31 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/13 20:32:24 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string	Harl::_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};

void	Harl::_debug( void )
{
	std::cerr << "[ DEBUG ]\n";
	std::cerr << "I love having extra bacon for my 7XL-";
	std::cerr << "double-cheese-triple-pickle-special-";
	std::cerr << "ketchup burger. I really do!\n\n";
}

void	Harl::_info( void )
{
	std::cerr << "[ INFO ]\n";
	std::cerr << "I cannot believe adding extra bacon costs more money. ";
	std::cerr << "You didn't put enough bacon in my burger! ";
	std::cerr << "If you did, I wouldn't be asking for more!\n\n";
}

void	Harl::_warning( void )
{
	std::cerr << "[ WARNING ]\n";
	std::cerr << "I think I deserve to have some extra bacon for free. ";
	std::cerr << "I've been coming for years whereas you started working";
	std::cerr << " here since last month.\n\n";
}

void	Harl::_error( void )
{
	std::cerr << "[ ERROR ]\n";
	std::cerr << "This is unacceptable! ";
	std::cerr << "I want to speak to the manager now.\n\n";
}

int	Harl::get_level(std::string const& level)
{
	for (int i = 0; !Harl::_levels[i].empty(); ++i)
	{
		if (level == this->_levels[i])
			return (i);
	}
	return (-1);
}

void	Harl::complain( std::string level)
{
	void	(Harl::*fun_ptr)( void ) = NULL;

	switch (get_level(level))
	{
		case (0):
			fun_ptr = &Harl::_debug;
			(this->*fun_ptr)();
		case (1):
			fun_ptr = &Harl::_info;
			(this->*fun_ptr)();
		case (2):
			fun_ptr = &Harl::_warning;
			(this->*fun_ptr)();
		case (3):
			fun_ptr = &Harl::_error;
			(this->*fun_ptr)();
			break ;
		default:
			std::cerr << "wrong call to complain. Ignored\n";
			return ;
	}	
}

void	Harl::complain_filter( std::string const & level )
{
	int		level_index;

	level_index = get_level(level);
	if ( -1 == level_index )
	{
		std::cout << "[ Probably complaining "
				"about insignificant problems ]\n";
		return ;
	}
	this->complain(_levels[level_index]);
}
