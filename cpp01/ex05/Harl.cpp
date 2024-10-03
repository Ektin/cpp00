/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:58:31 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/13 17:36:44 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string	Harl::_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};

void	Harl::_debug( void )
{
	std::cerr << "I love having extra bacon for my 7XL-";
	std::cerr << "double-cheese-triple-pickle-special-";
	std::cerr << "ketchup burger. I really do!\n";
}

void	Harl::_info( void )
{
	std::cerr << "I cannot believe adding extra bacon costs more money. ";
	std::cerr << "You didn't put enough bacon in my burger! ";
	std::cerr << "If you did, I wouldn't be asking for more!\n";
}

void	Harl::_warning( void )
{
	std::cerr << "I think I deserve to have some extra bacon for free. ";
	std::cerr << "I've been coming for years whereas you started working";
	std::cerr << " here since last month.\n";
}

void	Harl::_error( void )
{
	std::cerr << "This is unacceptable! ";
	std::cerr << "I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level )
{
	typedef	void (Harl::*fun_ptr)( void );

	fun_ptr arr_fun[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	for (int i = 0; !_levels[i].empty(); ++i)
	{
		if (_levels[i] == level)
		{
			(this->*arr_fun[i])();
			return ;
		}
	}
	std::cerr << "wrong call to complain. Ignored\n";
	return ;
}
