/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:37 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/11 16:09:40 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                   Constructors / Destructor                  */
/*                                                              */
/*                                                              */
/* ************************************************************ */

ClapTrap::ClapTrap() : name("Unknow"), lifePts(10), energyPts(10), attackDmg(0)
{
	std::cout << GREEN << "Constructor : -- Welcome Unknown --" << END << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), lifePts(10), energyPts(10), attackDmg(0)
{
	std::cout << GREEN << "Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	*this = source;
	std::cout << GREEN << "Copy constructor : -- Welcome " << this->name << ", you looks exactly like " << source.name << " --" << END << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor : -- Destruction of " << this->name << " --" << END << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &source)
{
	if (this != &source)
	{
		std::cout << GREEN << "Copy assignement : -- A copy of " << source.name << " is born ! --" << END << std::endl;
		this->setName(source.name);
		this->setLife(source.lifePts);
		this->setEnergy(source.energyPts);
		this->setAttackDmg(source.attackDmg);
	}
	return (*this);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	ClapTrap::attack(const std::string &target)
{
	if (this->energyPts <= 0 && this->lifePts > 0)
	{
		std::cout << this->name << " don't have enough energy to attack ¯\\_(ツ)_/¯" << std::endl;
	}
	else if (this->energyPts > 0 && this->lifePts > 0)
	{
		std::cout 	<< YELLOW << this->name << " attacks " << target
					<< " causing " << this->attackDmg
					<< " points of damage ! (ง'̀-'́)ง" << END << std::endl;
		this->energyPts--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << YELLOW << this->name << " takes " << amount << " points of damage !" << END << std::endl;
	this->lifePts -= amount;
	if (this->lifePts <= 0)
	{
		this->lifePts = 0;
		std::cout << this->name << " is dead (҂◡_◡)" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPts <= 0 && this->lifePts > 0)
	{
		std::cout << this->name << " don't have enough energy to heal himself ¯\\_(ツ)_/¯" << std::endl;
	}
	else if (this->energyPts > 0 && this->lifePts > 0)
	{
		std::cout << BLUE << this->name << " heals himself (+" << amount << " pts !) ( ˘ ³˘)♥" << END << std::endl;
		this->lifePts += amount;
		this->energyPts--;
	}
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Getter                            */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::string ClapTrap::getName()
{
	return (this->name);
}

int	ClapTrap::getLife()
{
	return (this->lifePts);
}

int	ClapTrap::getEnergy()
{
	return (this->energyPts);
}

int	ClapTrap::getAttackDmg()
{
	return (this->attackDmg);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Setter                            */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	 ClapTrap::setName(std::string name)
{
	this->name = name;
}

void	ClapTrap::setLife(int life)
{
	this->lifePts = life;
}

void	ClapTrap::setEnergy(int energy)
{
	this->energyPts = energy;
}

void	ClapTrap::setAttackDmg(int attackDmg)
{
	this->attackDmg = attackDmg;
}
