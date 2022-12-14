/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:54:06 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 11:58:42 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Character.hpp"

Character::Character()
{
	this->name = "Unknown";
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character &source)
{
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
	this->name = source.name;
	for (int i = 0; i < 4; i++)
	{
		if (source.inventory[i] != NULL)
			this->inventory[i] = source.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
		{
			std::cout << RED << "Metaria " << this->inventory[i]->getType() << " remaining in inventory at index " << i <<  " deleted" << std::endl << END;
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
	if (!m)
	{
		std::cout << RED << "You tried to equip a non existing Materia" << END << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == m)
		{
			std::cout << RED << "Materia " << m->getType() << " is already equiped by " << this->getName() << std::endl << END;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << BGREEN << "Materia " << m->getType() << " has been equiped by " << this->getName() << " at index " << i << std::endl << END;
			return ;
		}
	}
	std::cout << RED << this->getName() << "'s inventory is full" << std::endl << END;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "Index " << idx << " does not exist" << END << std::endl;
	else if (this->inventory[idx] != NULL)
	{
		std::cout << BGREEN << "Materia " << this->inventory[idx]->getType() << " has been sucessfuly removed from inventory at index " << idx << std::endl << END;
		this->inventory[idx] = NULL;
	}
	else
		std::cout << RED << "This inventory's emplacement (" << idx <<  ") is already empty" << std::endl << END;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "Index " << idx << " does not exist" << END << std::endl;
	else if (this->inventory[idx] != NULL)
	{
		std::cout << BGREEN << this->getName() << " uses Materia " << this->inventory[idx]->getType() << " on " << target.getName() << std::endl << END;
		this->inventory[idx]->use(target);
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
	}
	else
		std::cout << RED << "This inventory's emplacement (" << idx <<  ") is empty .." <<std::endl << END;
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
