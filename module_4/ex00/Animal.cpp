/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:22:30 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:28:59 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */)
{
	std::cout << GREEN << "Animal's default constructor called" << END << std::endl;
}

Animal::Animal(const Animal &source)
{
	std::cout << GREEN << "Animal's copy constructor called" << END << std::endl;
	*this = source;
}

Animal::~Animal()
{
	std::cout << GREEN << "Animal's destructor called" << END << std::endl;
}

Animal	&Animal::operator=(const Animal &source)
{
	std::cout << GREEN << "Animal's assignator called" << END << std::endl;
	return (*this);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	Animal::makeSound() const
{
	std::cout << GREEN << "* undefined animal's noise *" << END << std::endl;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                          Getter                              */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::string Animal::getType() const
{
	return (this->type);
}