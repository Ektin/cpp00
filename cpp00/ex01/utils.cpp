/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:22:40 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/03 19:57:05 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <sstream>

void	display_ten(std::string const &str)
{
	if (str.length() <= 10)
		std::cout << std::setw(10) << str;
	else
		std::cout << std::setw(9) << str.substr(0, 9) << '.';
}

// -1: Ctrl+D was pressed, end the whole program, as std::cin was closed
// -2: not a number was entered
// returns index. Makes sense from 1 to 8 included.
int	get_index(int &err)
{
	std::string		index;
	std::istringstream	is(index);
	int			intindex;

	err = 0;
	std::cout << "Enter the index of contact you want to see: ";
	std::getline(std::cin, index);
	if (index.empty())
	{
		err = -1;
		return (-1);
	}
	if (!is_number(index))
	{
		std::cout << "You entered " << index << "; ";
		std::cout << "it is not a valid number, aborted\n";
		err = -2;
		return (-2);
	}
	is.str(index);
	if (!(is >> intindex))
		std::cout << intindex << " It can not happen FAILURE\n";
	return (intindex);
}

int	is_number(std::string const &str)
{
	if (str.empty())
		return (0);
	if (!isdigit(str[0]) && '-' != str[0] && '+' != str[0])
		return (0);
	for (unsigned int i = 1; i < str.length(); ++i)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

int	is_digit(char ch)
{
	if (ch <= '9' && ch >= '0')
		return (1);
	return (0);
}
