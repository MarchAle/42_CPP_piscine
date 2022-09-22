/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:36:27 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 10:30:38 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &source)
{
	*this = source;
}

AMateria &AMateria::operator=(const AMateria &source)
{
	this->type = source.getType();
	return (*this);
}

AMateria::~AMateria()
{
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void AMateria::use(ICharacter &target)
{
	if (this->type.compare("ice") == 0)	
	{
		std::cout << BBLUE << "* shoots an ice bolt at " << target.getName() << " *" << END << std::endl;
	}
	else if (this->type.compare("cure") == 0)
	{
		std::cout << BMAGENTA << "* heals " << target.getName() << "'s wounds *" << END <<std::endl;
	}
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                             Getter                           */
/*                                                              */
/*                                                              */
/* ************************************************************ */

const std::string &AMateria::getType() const
{
	return (this->type);
}
