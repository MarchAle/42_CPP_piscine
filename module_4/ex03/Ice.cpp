/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:31:11 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/18 11:12:00 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice()
{
	// std::cout << BLUE << "Ice default constructor" << std::endl << END;
	this->type = "ice";
}

Ice::Ice(const std::string type)
{
	// std::cout << BLUE << "Ice constructor" << std::endl << END;
	this->type = type;
}

Ice::Ice(const Ice &source)
{
	// std::cout << BLUE << "Ice copy constructor" << std::endl << END;
	this->type = source.type;
}

Ice &Ice::operator=(const Ice &source)
{
	// std::cout << BLUE << "Ice assignator" << std::endl << END;
	this->type = source.type;
	return (*this);
}

Ice::~Ice()
{
	// std::cout << BLUE << "Ice destructor" << std::endl << END;
}


/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

Ice *Ice::clone() const
{
	return (new Ice(*this));
}
