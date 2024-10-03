/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:00:23 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/03 19:31:40 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include "utils.hpp"

class Contact
{
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_darkest_secret;
		std::string	_phone_number;

	public:
		Contact();
		void	set_contact(Contact const & reference_contact);
		void	display_contact(int index) const;
		void	show_contact(void) const;
		void	set_first_name(std::string const &input);
		void	set_last_name(std::string const &input);
		void	set_nick_name(std::string const &input);
		void	set_phone_number(std::string const &input);
		void	set_darkest_secret(std::string const &input);
};

#endif
