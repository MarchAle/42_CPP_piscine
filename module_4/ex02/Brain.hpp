/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:44:26 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/16 11:05:09 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];
	protected:
	public:
		Brain(/* args */);
		Brain(const Brain &source);
		~Brain();
		Brain &operator=(const Brain &source);
};


#endif