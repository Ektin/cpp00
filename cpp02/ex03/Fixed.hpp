/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:45:25 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/17 14:34:43 by EktinOpUrims     ###   ########.fr       */
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

#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
	private:
		int			_raw_int;

	private:
		static int		_frac_bits_cnt;
		static int		_two_power;
	private:
		static int		_high_precision_output;
		static int		_frac_decimals_cnt;
		static __int64_t	_ten_power;
		
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
		int			get_frac_decimals_cnt( void ) const;
		__int64_t		get_ten_power( void ) const;

	public:
		static int		compute_two_power( void );
		static int		compute_frac_decimals_cnt( void );
		static __int64_t	compute_ten_power( void );

	public:
		bool			operator>(Fixed const& obj) const;
		bool			operator<(Fixed const& obj) const;
		bool			operator>=(Fixed const& obj) const;
		bool			operator<=(Fixed const& obj) const;
		bool			operator==(Fixed const& obj) const;

	public:
		Fixed			operator+(Fixed const &obj) const;
		Fixed			operator-(Fixed const &obj) const;
		Fixed			operator*(Fixed const &obj) const;
		Fixed			operator/(Fixed const &obj) const;

	public:
		Fixed &			operator++( ); // pre-increment
		Fixed			operator++( int ); // post-increment
		Fixed &			operator--();
		Fixed			operator--(int);

	public:
		static Fixed &		min(Fixed & first, Fixed & second);
		static Fixed const &	min(Fixed const & f, Fixed const & s);
		static Fixed &		max(Fixed & first, Fixed & second);
		static Fixed const &	max(Fixed const & f, Fixed const & s);

	public:
		void			display( void ) const;
};

std::ostream &	operator<<(std::ostream &os, Fixed const& fix);

#endif // FIXED_HPP
