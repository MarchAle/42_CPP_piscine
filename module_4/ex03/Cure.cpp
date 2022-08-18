/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:25:29 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 14:16:25 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(/* args */)
{
	// std::cout << "Cure default constructor" << std::endl;
	this->type = "cure";
}

Cure::Cure(const std::string &type)
{
	// std::cout << "Cure constructor" << std::endl;
	this->type = type;
}

Cure::Cure(const Cure &source)
{
	// std::cout << "Cure copy constructor" << std::endl;
	this->type = source.type;
}

Cure &Cure::operator=(const Cure &source)
{
	// std::cout << "Cure assignator" << std::endl;
	this->type = source.type;
	return (*this);
}

Cure::~Cure()
{
	// std::cout << "Cure destructor" << std::endl;

}


/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}