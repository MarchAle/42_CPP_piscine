/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:44:26 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:54:39 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
	private:
	protected:
		std::string ideas[100];
	public:
		Brain(/* args */);
		Brain(const Brain &source);
		~Brain();
		Brain &operator=(const Brain &source);
};


#endif