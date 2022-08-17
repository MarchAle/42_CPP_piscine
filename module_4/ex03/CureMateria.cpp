/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:25:29 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 14:16:25 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureMateria.hpp"

CureMateria::CureMateria(/* args */)
{
	std::cout << "CureMateria default constructor" << std::endl;
}

CureMateria::CureMateria(const std::string &type)
{
	std::cout << "CureMateria constructor" << std::endl;
	this->type = type;
}

CureMateria::CureMateria(const CureMateria &source)
{
	std::cout << "CureMateria copy constructor" << std::endl;
	this->type = source.type;
}

CureMateria &CureMateria::operator=(const CureMateria &source)
{
	std::cout << "CureMateria assignator" << std::endl;
	this->type = source.type;
	return (*this);
}

CureMateria::~CureMateria()
{
	std::cout << "CureMateria destructor" << std::endl;

}


/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

AMateria *CureMateria::clone() const
{
	return (new CureMateria(*this));
}