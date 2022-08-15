/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:43:23 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:28:33 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */)
{
	std::cout << BLUE << "Dog's default constructor called" << END << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &source)
{
	std::cout << BLUE << "Dog's copy constructor called" << END << std::endl;
	*this = source;
}

Dog::~Dog()
{
	std::cout << BLUE << "Dog's destructor called" << END << std::endl;
}

Dog &Dog::operator=(const Dog &source)
{
	std::cout << BLUE << "Dog's assignator called" << END << std::endl;
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
	std::cout << BLUE << "Wahouaf wahouaf ..." << END << std::endl;
}
