/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:43:23 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/19 14:16:17 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

Dog::Dog()
{
	std::cout << CYAN << "Dog's default constructor called" << END << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &source)
{
	std::cout << CYAN << "Dog's copy constructor called" << END << std::endl;
	*this = source;
}

Dog::~Dog()
{
	std::cout << CYAN << "Dog's destructor called" << END << std::endl;
}

Dog &Dog::operator=(const Dog &source)
{
	this->type = source.getType();
	return (*this);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	Dog::makeSound() const
{
	std::cout << CYAN << "Wahouaf wahouaf ..." << END << std::endl;
}
