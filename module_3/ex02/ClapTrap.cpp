/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:37 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/16 13:44:23 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************ */
/*                            Constructor                       */
/*                     Copy assignement operator                */
/*                            Destructor                        */
/* ************************************************************ */

ClapTrap::ClapTrap() : name("Unknow"), lifePts(10), energyPts(10), attackDmg(0)
{
	std::cout << GREEN << "Clap Constructor : -- Welcome Unknown --" << END << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), lifePts(10), energyPts(10), attackDmg(0)
{
	std::cout << GREEN << "Clap Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	*this = source;
	std::cout << GREEN << "Clap Copy constructor : -- A copy of " << this->name << " has been made --" << END << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &source)
{
	if (this != &source)
	{
		this->setName(source.name);
		this->setLife(source.lifePts);
		this->setEnergy(source.energyPts);
		this->setAttackDmg(source.attackDmg);
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Clap Destructor : -- Destruction of " << this->name << " --" << END << std::endl;
}

/* ************************************************************ */
/*                                                              */
/*                        Member Functions                      */
/*                                                              */
/* ************************************************************ */

void	ClapTrap::attack(const std::string &target)
{
	if (this->lifePts <= 0)
		std::cout << "Clap " << this->name << " is dead, he can't attack" << std::endl;
	else if (this->energyPts <= 0)
		std::cout << "Clap " << this->name << " don't have enough energy to attack ¯\\_(ツ)_/¯" << std::endl;
	else
	{
		std::cout 	<< BGREEN << "Clap " << this->name << " attacks " << target
					<< " causing " << this->attackDmg
					<< " points of damage ! (ง'̀-'́)ง" 
					<< " (Energy Points left : " << --this->energyPts << ")"
					<< END << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->lifePts - (int)amount < 0)
	{
		amount = this->lifePts;
		this->lifePts = 0;
	}
	else
		this->lifePts -= amount;
	std::cout 	<< YELLOW << this->name << " takes " 
				<< amount << " points of damage !" 
				<< " (Life Points left : " << this->lifePts << ")"
				<< END << std::endl;
	if (this->lifePts == 0)
		std::cout << BRED << this->name << " is " << (amount == 0 ? "already " : "") << "dead (҂◡_◡)" << END << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->lifePts <= 0)
		std::cout << this->name << " is dead, he can't heals himself" << std::endl;
	else if (this->energyPts <= 0)
		std::cout << this->name << " don't have enough energy to heal himself ¯\\_(ツ)_/¯" << std::endl;
	else
	{
		std::cout 	<< BLUE << this->name << " heals himself (+" << amount << " pts !) ( ˘ ³˘)♥" 
					<< " (Energy Points left : " << --this->energyPts << ")"
					<< END << std::endl;
		this->lifePts += amount;
	}
}

/* ************************************************************ */
/*                                                              */
/*                            Getter                            */
/*                                                              */
/* ************************************************************ */

std::string ClapTrap::getName() const
{
	return (this->name);
}

int	ClapTrap::getLife() const
{
	return (this->lifePts);
}

int	ClapTrap::getEnergy() const
{
	return (this->energyPts);
}

int	ClapTrap::getAttackDmg() const
{
	return (this->attackDmg);
}

/* ************************************************************ */
/*                                                              */
/*                            Setter                            */
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
