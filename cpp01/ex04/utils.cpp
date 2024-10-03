/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:25:44 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/13 12:21:44 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "utils.hpp"

int	read_input(int argc, char *argv[], std::string & input_content)
{
	if (4 != argc)
	{
		std::cerr << "Wrong number of arguments\n";
		std::cerr << "Usage: ./sed file.txt s1 s2\n";
		return (1);
	}
	if (0 != read_content_of_file(argv[1], input_content))
		return (2);
	return (0);
}

int	read_content_of_file(char const * const file, \
				std::string & input_content)
{
	std::ifstream	ifs;
	std::string	curr_line;

	ifs.open(file);
	if (!ifs.is_open())
	{
		std::cerr << "Je name lito, ale s zvolenim souborem se nyni ";
		std::cerr << "nelze spojit. Je bud' vypnuto nebo nedostupne. ";
		std::cerr << "Zkuste to prosim pozdeji\n";
		ifs.close(); // no impact
		return (1);
	}
	std::getline(ifs, input_content);
	while( std::getline(ifs, curr_line, '\n') )
	{
		input_content.append("\n");
		input_content.append(curr_line);
	}
	ifs.close();
	return (0);
}

void	modify_content(std::string const& orig, \
			std::string const& subs, \
			std::string & content)
{
	int	len1;
	int	len2;
	int	pos;

	len1 = orig.length();
	len2 = subs.length();
	pos = 0;
	while (-1 != pos)
	{
		pos = (int) content.find(orig, pos);
		if (pos > -1)
		{
			content.erase(pos, len1);
			content.insert(pos, subs);
			pos += len2;
		}
	}
	return ;
}

void	write_to_file(std::string const& content, std::string const& out_file)
{
	std::ofstream	ofs;

	ofs.open(out_file.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "mistake opening replaced file [";
		std::cerr << out_file << "]\n";
		ofs.close();
		return ;
	}
	ofs << content;
	ofs.close();
}
