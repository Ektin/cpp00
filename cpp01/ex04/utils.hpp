/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:23:49 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/07/13 12:19:59 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

int	read_input(int argc, char *argv[], std::string &input_content);
int	read_content_of_file(char const * const file, std::string & input_string);
void	modify_content(std::string const& orig, \
			std::string const& subs, \
			std::string & content);
void	write_to_file(std::string const& content, std::string const& out_file);

#endif // UTILS_HPP
