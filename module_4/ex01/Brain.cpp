/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:44:40 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:53:56 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
	std::cout << YELLOW << "Brain's default constructor called" << END << std::endl;
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
	std::cout << YELLOW << "Brain's asignator called" << END << std::endl;
	return (*this);	
}
