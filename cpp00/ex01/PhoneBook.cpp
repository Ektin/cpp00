/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:22:13 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/03 19:46:59 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	PhoneBook::add_new_contact()
{
	Contact	contact;
	std::string	input;

	std::cout << "You will now enter a new contact\n";
	std::cout << "Enter the first name: ";
	std::getline(std::cin >> std::ws, input, '\n');
	if (input.empty())
		return (-1);
	contact.set_first_name(input);
	input = "";

	std::cout << "Enter the last name: ";
	std::getline(std::cin >> std::ws, input, '\n');
	if (input.empty())
		return (-1);
	contact.set_last_name(input);
	input = "";
	
	std::cout << "Enter the nickname: ";
	std::getline(std::cin >> std::ws, input, '\n');
	if (input.empty())
		return (-1);
	contact.set_nick_name(input);
	input = "";

	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin >> std::ws, input, '\n');
	if (input.empty())
		return (-1);
	contact.set_darkest_secret(input);
	input = "";

	std::cout << "Enter the phone number: ";
	std::getline(std::cin >> std::ws, input, '\n');
	if (input.empty())
		return (-1);
	contact.set_phone_number(input);
	input = "";

	this->_contact_arr[this->_index].set_contact(contact);			
	this->display_contact(this->_index);

	if (this->_number_of_contacts == this->_index)
		++this->_number_of_contacts;
	this->increase_index();
	return (0);
}

void	PhoneBook::increase_index(void)
{
	++this->_index;
	this->_index -= (this->_index >> 3) << 3;
}

int	PhoneBook::get_index(void)
{
	return (this->_index);
}

void	PhoneBook::display_contact(int index) const
{
	index -= (index >> 3) << 3;

	this->_contact_arr[index].display_contact(index);
}

void	PhoneBook::display_all_contacts() const
{
	for (int i = 0; i < this->_number_of_contacts; ++i)
		PhoneBook::display_contact(i);
}

void	PhoneBook::show_contact(int index) const
{
	if (index <= 0 || index > this->_number_of_contacts)
	{
		std::cout << "index is out of range [1 .. ";
		std::cout << this->_number_of_contacts << "]\nAborted\n";
		return ;
	}
	this->_contact_arr[--index].show_contact();
}
