/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:22:30 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/20 11:26:29 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << GREEN << "Animal's default constructor called" << END << std::endl;
}

AAnimal::AAnimal(const AAnimal &source)
{
	std::cout << GREEN << "Animal's copy constructor called" << END << std::endl;
	*this = source;
}

AAnimal::~AAnimal()
{
	std::cout << GREEN << "Animal's destructor called" << END << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &source)
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

void	AAnimal::makeSound() const
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

std::string AAnimal::getType() const
{
	return (this->type);
}