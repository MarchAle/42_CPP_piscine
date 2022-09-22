/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:44:40 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/20 10:15:06 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Brain.hpp"

Brain::Brain()
{
	std::cout << YELLOW << "Brain's default constructor called" << END << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "";
	}
}

Brain::Brain(const Brain &source)
{
	std::cout << YELLOW << "Brain's copy constructor called" << END << std::endl;
	*this = source;
}

Brain::~Brain()
{
	std::cout << YELLOW << "Brain's destructor called" << END << std::endl;
}

Brain	&Brain::operator=(const Brain &source)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = source.getIdea(i);
	}
	return (*this);	
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::string Brain::getIdea(unsigned i) const
{
	if (i >= 100)
		return ("");
	else
		return this->ideas[i];
}

void		Brain::setIdea(unsigned i, std::string idea)
{
	if (i >= 100)
		std::cout << "Error : this idea can't fit in this brain" << std::endl;
	else
		this->ideas[i] = idea;
}