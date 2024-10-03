/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:45:25 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/14 19:12:49 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int		_raw_int;
		static int	_frac_bits_cnt;
	public:
		Fixed( void );
		Fixed( Fixed const& src);
		~Fixed( void );

		Fixed &	operator=(Fixed const& src);

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif // FIXED_HPP
