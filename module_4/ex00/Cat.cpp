/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:01:35 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:28:43 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */)
{
	std::cout << ORANGE << "Cat's default constructor called" << END << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &source)
{
	std::cout << ORANGE << "Cat's copy constructor called" << END << std::endl;
	*this = source;
}

Cat	&Cat::operator=(const Cat &source)
{
	std::cout << ORANGE << "Cat's assignator called" << END << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << ORANGE << "Cat's	destructor called" << END << std::endl;
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