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

#include "../incs/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &source) : AMateria(source)
{
}

Cure &Cure::operator=(const Cure &source)
{
	this->type = source.type;
	return (*this);
}

Cure::~Cure()
{
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