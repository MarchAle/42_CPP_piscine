/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:43:23 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/20 11:13:07 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

Dog::Dog()
{
	std::cout << BLUE << "Dog's default constructor called" << END << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog &source)
{
	std::cout << BLUE << "Dog's copy constructor called" << END << std::endl;
	*this = source;
}

Dog &Dog::operator=(const Dog &source)
{
	this->type = source.getType();
	this->brain = new Brain();
	*(this->brain) = *(source.brain);
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << BLUE << "Dog's destructor called" << END << std::endl;
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

Brain &Dog::getBrain()
{
	return (*(this->brain));
}
