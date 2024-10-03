/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:52:51 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/13 16:56:39 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void			_debug( void );
		void			_info( void );
		void			_warning( void );
		void			_error( void );
		static std::string	_levels[];

	public:
		void	complain( std::string level);
		void	complain_filter( std::string const& level );
		int	get_level(std::string const & level);
};

#endif // HARL_HPP
