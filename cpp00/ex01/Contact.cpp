/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:48:57 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/03 19:43:22 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact():
	_first_name("Hi"),
	_last_name("Helloatoutatout"),
	_nick_name("Bonjour")
{
}

void	Contact::set_contact(Contact const &ref)
{
	this->_first_name = ref._first_name;
	this->_last_name = ref._last_name;
	this->_nick_name = ref._nick_name;
	this->_phone_number = ref._phone_number;
	this->_darkest_secret = ref._darkest_secret;
}

void	Contact::display_contact(int index) const
{
	std::cout << std::setw(10) << ++index << "|";
	display_ten(this->_first_name);
	std::cout << "|";
	display_ten(this->_last_name);
	std::cout << "|";
	display_ten(this->_nick_name);
	std::cout << "\n";
}

void	Contact::show_contact(void) const
{
	std::cout << "=======================\n";
	std::cout << std::setw(16) << std::left << "First name: " << this->_first_name << "\n";
	std::cout << std::setw(16) << std::left << "Last name: " << this->_last_name << "\n";
	std::cout << std::setw(16) << std::left << "Nickname: " << this->_nick_name << "\n";
	std::cout << std::setw(16) << std::left << "Phone number: " << this->_phone_number << "\n";
	std::cout << std::setw(16) << std::left << "Darkest secret: " << this->_darkest_secret << "\n";
	std::cout << "=======================\n";
}

void	Contact::set_first_name(std::string const & input)
{
	this->_first_name = input;
}

void	Contact::set_last_name(std::string const & input)
{
	this->_last_name = input;
}

void	Contact::set_nick_name(std::string const & input)
{
	this->_nick_name = input;
}

void	Contact::set_phone_number(std::string const & input)
{
	this->_phone_number = input;
}

void	Contact::set_darkest_secret(std::string const & input)
{
	this->_darkest_secret = input;
}
