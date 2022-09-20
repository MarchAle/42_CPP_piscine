/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:01:35 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/19 14:16:42 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

Cat::Cat()
{
	std::cout << BLUE << "Cat's default constructor called" << END << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &source)
{
	std::cout << BLUE << "Cat's copy constructor called" << END << std::endl;
	*this = source;
}

Cat	&Cat::operator=(const Cat &source)
{
	this->type = source.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << BLUE << "Cat's destructor called" << END << std::endl;
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
	std::cout << BLUE << "Mi-ahou mi-ahou ..." << END << std::endl;
}