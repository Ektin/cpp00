/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:58:40 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/03 19:30:59 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact_arr[8];	
		int		_index;
		int		_number_of_contacts;
	public:
		PhoneBook(void): _index(0), _number_of_contacts(0){}
		int	add_new_contact();
		int	get_index(void);
		void	increase_index(void);
		void	display_contact(int index) const;
		void	display_all_contacts(void) const;
		void	show_contact(int index) const;
};

#endif // PHONE_BOOK_HPP
