/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:49:07 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:29:11 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << RED << "WrongAnimal's default constructor called" << END << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &source)
{
	std::cout << RED << "WrongAnimal's copy constructor called" << END << std::endl;
	*this = source;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal's destructor called" << END << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &source)
{
	std::cout << RED << "WrongAnimal's assignator called" << END << std::endl;
	return (*this);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	WrongAnimal::makeSound() const
{
	std::cout << RED << "* bleuhrk ! WrongAnimal noise *" << END << std::endl;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                          Getter                              */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::string WrongAnimal::getType() const
{
	return (this->type);
}