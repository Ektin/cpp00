/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:01:58 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/04 16:04:57 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	Contact		contact;
	std::string	cmd;
	int		index;
	int		err;

	while(1)
	{
		cmd = "";
		std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, cmd);
		//std::getline(std::cin >> std::ws, cmd);
		if (cmd.empty())
		{
			std::cout << "empty line bye bye\n";
			break;
		}
		std::cout << "You entered " << cmd << std::endl;
		if (cmd == "EXIT")
		{
			std::cout << "Bye-bye" << std::endl;
			break ;
		}
		else if (cmd == "ADD")
		{
			if (-1 == book.add_new_contact())
				break ;
		}
		else if (cmd == "SEARCH")
		{
			book.display_all_contacts();
			index = get_index(err);
			if (-1 == err)
				break ;
			if (-2 == err)
				continue ;
			book.show_contact(index);
		}
	}
	return (0);
}
