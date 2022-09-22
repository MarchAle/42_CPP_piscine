/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:44:26 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/20 11:25:17 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "AAnimal.hpp"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &source);
		Brain &operator=(const Brain &source);
		~Brain();

		std::string getIdea(unsigned i) const;
		void		setIdea(unsigned i, std::string idea);
};

#endif