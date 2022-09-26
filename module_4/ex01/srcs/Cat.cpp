/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:01:35 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/22 13:09:27 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

Cat::Cat()
{
	std::cout << ORANGE << "Cat's default constructor called" << END << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat &source)
{
	std::cout << ORANGE << "Cat's copy constructor called" << END << std::endl;
	*this = source;
}

Cat	&Cat::operator=(const Cat &source)
{
	std::cout << "cat assignator" << std::endl;
	this->type = source.type;
	this->brain = new Brain;
	this->brain = source.brain;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << ORANGE << "Cat's destructor called" << END << std::endl;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	Cat::makeSound() const
{
	std::cout << ORANGE << "Mi-ahou mi-ahou ..." << END << std::endl;
}

Brain &Cat::getBrain()
{
	return (*(this->brain));
}