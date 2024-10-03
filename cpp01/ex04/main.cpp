/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:14:46 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/13 12:48:52 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "utils.hpp"

int	main( int argc, char *argv[] )
{
	std::string	input_content;
	int		res;
	std::ofstream	ofs;
	std::string	out_file;

	if ( 0 != (res = read_input(argc, argv, input_content)) )
		return (res);
	modify_content(argv[2], argv[3], input_content);
	out_file = std::string(argv[1]).append(".replace");
	write_to_file(input_content, out_file);
	return (0);
}
