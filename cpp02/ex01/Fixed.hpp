/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:45:25 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/15 16:57:12 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#ifndef FRAC_BITS_CNT
# define FRAC_BITS_CNT 8
#endif

#if FRAC_BITS_CNT < 0 
# undef FRAC_BITS_CNT
# define FRAC_BITS_CNT 0
#endif

#if FRAC_BITS_CNT > 16 
# undef FRAC_BITS_CNT
# define FRAC_BITS_CNT 16
#endif

/*#ifndef HIGH_PRECISION_OUTPUT
# define HIGH_PRECISION_OUTPUT 1
#endif

#if HIGH_PRECISION_OUTPUT > 1
# undef HIGH_PRECISION_OUTPUT
# define HIGH_PRECISION_OUTPUT 1
#endif

#if HIGH_PRECISION_OUTPUT < 0
# undef HIGH_PRECISION_OUTPUT
# define HIGH_PRECISION_OUTPUT 0
#endif
*/

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			_raw_int;

	private:
		static int		_frac_bits_cnt;
		static int		_two_power;
		// static int		_high_precision_output;
		// static int		_frac_decimals_cnt;
		// static __int64_t	_ten_power;
		
	public:
		Fixed( void );
		Fixed( Fixed const& src);
		Fixed( int const n ); // though it makes no sense to const here
		Fixed( float const n );
		~Fixed( void );

		Fixed &	operator=(Fixed const& src);

		int			getRawBits( void ) const;
		void			setRawBits( int const raw );

		float			toFloat( void ) const;
		int			toInt( void ) const;

	public:
		int			get_frac_bits_cnt( void ) const;
		int			get_two_power( void ) const;
		// int			get_frac_decimals_cnt( void ) const;
		// __int64_t		get_ten_power( void ) const;

	public:
		static int		compute_two_power( void );
		// static int		compute_frac_decimals_cnt( void );
		// static __int64_t	compute_ten_power( void );

};

std::ostream &	operator<<(std::ostream &os, Fixed const& fix);

#endif // FIXED_HPP
