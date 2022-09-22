/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:45:24 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 11:46:51 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->memory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
	for (int i = 0; i < 4; i++)
	{
		this->memory[i] = source.memory[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &source)
{
	for (int i = 0; i < 4; i++)
	{
		this->memory[i] = source.memory[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
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
