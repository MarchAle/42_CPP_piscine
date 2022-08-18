/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:45:24 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/18 11:11:15 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << BYELLOW << "MateriaSource default constructor" << std::endl << END;
	for (int i = 0; i < 4; i++)
	{
		this->memory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
	// std::cout << BYELLOW << "MateriaSource constructor" << std::endl << END;
	for (int i = 0; i < 4; i++)
	{
		this->memory[i] = source.memory[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &source)
{
	// std::cout << BYELLOW << "MateriaSource copy constructor" << std::endl << END;
	for (int i = 0; i < 4; i++)
	{
		this->memory[i] = source.memory[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	// std::cout << BYELLOW << "MateriaSource destructor" << std::endl << END;
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i] != NULL)
		{
			delete this->memory[i];
		}
	}
}

IMateriaSource::~IMateriaSource()
{
	// std::cout << BYELLOW << "IMateriaSource destructor" << std::endl << END;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	MateriaSource::learnMateria(AMateria* source)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i] == NULL)
		{
			this->memory[i] = source->clone();
			delete source;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i]->getType().compare(type) == 0)
		{
			return (this->memory[i]->clone());
		}
	}
	return (0);
}
