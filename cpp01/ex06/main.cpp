/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:09:49 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/13 16:05:54 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char *argv[] )
{
	Harl	harl;

	if (2 != argc)
	{
		std::cerr << "wrong usage: should be ./harlFilter msg\n";
		return (1);
	}
	harl.complain_filter( argv[1] );
	return (0);
}
