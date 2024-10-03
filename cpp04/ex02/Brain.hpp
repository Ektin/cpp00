/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EktinOpUrims <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:26:51 by EktinOpUrims      #+#    #+#             */
/*   Updated: 2024/08/15 19:48:02 by EktinOpUrims     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain(Brain const & src);
		~Brain();
		Brain &	operator=(Brain const & src);

	public:
		std::string  const & getIdea(int i) const;
		void	setIdea(int i, std::string const & idea);
};

#endif // BRAIN_HPP
