/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:23:42 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/09 08:33:41 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*ptr;

	ptr = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		ptr[i].set_name(name);
	}
	return (ptr);
}
