/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:36:27 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 14:48:55 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << RED << "AMATERIA DEFAULT CONSTRUCTOR" << std::endl << END;
}

AMateria::AMateria(const std::string &type)
{
	std::cout << RED << "AMATERIA CONSTRUCTOR" << std::endl << END;
	this->type = type;
}

AMateria::AMateria(const AMateria &source)
{
	std::cout << RED << "AMATERIA COPY CONSTRUCTOR" << std::endl << END;
	this->type = source.type;
}

AMateria &AMateria::operator=(const AMateria &source)
{
	this->type = source.getType();
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << RED << "AMATERIA DESTRUCTOR" << std::endl << END;
	
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
