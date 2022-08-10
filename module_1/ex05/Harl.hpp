/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:58:26 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/07 13:15:32 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		void 		debug();
		void 		info();
		void 		warning();
		void 		error();
		std::string	indexTab[4];
		void 		(Harl::*funcPtr[4])();
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif