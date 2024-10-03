/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:07:39 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/13 17:37:30 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl	harl;

	harl.complain( "hi" );
	harl.complain( "DEBUG" );
	harl.complain( "INFO" );
	harl.complain( "WARNING" );
	harl.complain( "ERROR" );
}
