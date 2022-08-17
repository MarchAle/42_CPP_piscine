/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:54:06 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 15:21:18 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << BGREEN << "Character default constructor" << std::endl << END;
	this->name = "Unknown";
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const std::string name)
{
	std::cout << BGREEN << "Character constructor" << std::endl << END;
	this->name = name;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character &source)
{
	std::cout << BGREEN << "Character copy constructor" << std::endl << END;
	this->name = source.name;
	for (int i = 0; i < 4; i++)
	{
		if (source.inventory[i] != NULL)
			this->inventory[i] = source.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character &Character::operator=(const Character &source)
{
	std::cout << BGREEN << "Character assignator" << std::endl << END;
	this->name = source.name;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = source.inventory[i];
	}
	return (*this);
}

Character::~Character()
{
	std::cout << BGREEN << "Character destructor" << std::endl << END;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "should delete ?" << std::endl;
		if (this->inventory[i] != NULL)
		{
			std::cout << "Metaria " << this->inventory[i]->getType() << " from inventory deleted" << std::endl;
			delete (this->inventory[i]);
			
		}
	}
}

ICharacter::~ICharacter()
{
}


/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == m)
		{
			std::cout << "Materia " << m->getType() << " is already equiped by " << this->getName() << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << "Materia " << m->getType() << " has been equiped by " << this->getName() << std::endl;
			return ;
		}
	}
	std::cout << this->getName() << "'s inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (this->inventory[idx] != NULL)
	{
		std::cout << "Materia " << this->inventory[idx]->getType() << " has been sucessfuly removed from inventory" << std::endl;
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "This inventory's emplacement is already empty" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->inventory[idx] != NULL)
	{
		std::cout << this->getName() << " uses Materia " << this->inventory[idx]->getType() << " on " << target.getName() << std::endl;
		this->inventory[idx]->use(target);
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
	}
	else
	{
		std::cout << "This inventory's emplacement is empty .." <<std::endl;
	}
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                             Getter                           */
/*                                                              */
/*                                                              */
/* ************************************************************ */

const std::string &Character::getName() 
{
	return (this->name);
}
