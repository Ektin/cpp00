/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:20:42 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/06/11 20:55:03 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	do_if_0_args()
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

char	capital(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch + 'A' - 'a');
	return (ch);
}

void	print_capitalized(char *str)
{
	while (*str)
	{
		std::cout << capital(*str++);
	}
}

void	do_if_more_args(int argc, char *argv[])
{
	for (int i = 1; i < argc; ++i)
	{
		print_capitalized(argv[i]);
	}
	std::cout << std::endl;
}

int	main(int argc, char *argv[])
{
	if (1 == argc)
		do_if_0_args();
	else
		do_if_more_args(argc, argv);
	return (0);
}
