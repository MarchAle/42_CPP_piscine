/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:31:11 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 14:22:42 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceMateria.hpp"


IceMateria::IceMateria()
{
	std::cout << BLUE << "IceMateria default constructor" << std::endl << END;
}

IceMateria::IceMateria(const std::string type)
{
	std::cout << BLUE << "IceMateria constructor" << std::endl << END;
	this->type = type;
}

IceMateria::IceMateria(const IceMateria &source)
{
	std::cout << BLUE << "IceMateria copy constructor" << std::endl << END;
	this->type = source.type;
}

IceMateria &IceMateria::operator=(const IceMateria &source)
{
	std::cout << BLUE << "IceMateria assignator" << std::endl << END;
	this->type = source.type;
	return (*this);
}

IceMateria::~IceMateria()
{
	std::cout << BLUE << "IceMateria destructor" << std::endl << END;
}


/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

IceMateria *IceMateria::clone() const
{
	return (new IceMateria(*this));
}
