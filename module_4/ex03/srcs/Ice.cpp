/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:31:11 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 10:30:26 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &source) : AMateria(source)
{
}

Ice &Ice::operator=(const Ice &source)
{
	this->type = source.type;
	return (*this);
}

Ice::~Ice()
{
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
