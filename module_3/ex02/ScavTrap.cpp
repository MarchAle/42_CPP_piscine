/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:02:36 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/16 14:28:08 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************ */
/*                            Constructor                       */
/*                     Copy assignement operator                */
/*                            Destructor                        */
/* ************************************************************ */


ScavTrap::ScavTrap() : ClapTrap("Unknow")
{
	this->name = "Unknow";
	this->lifePts = 100;
	this->energyPts = 50;
	this->attackDmg = 20;
	std::cout << GREEN << "Scav Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->lifePts = 100;
	this->energyPts = 50;
	this->attackDmg = 20;
	std::cout << GREEN << "Scav Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source)
{
	std::cout << GREEN << "Scav Copy constructor : -- A copy of " << this->name << " has been made --" << END << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Scav Destructor : -- Destruction of " << this->name << " --" << END << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &source)
{
	if (this != &source)
	{
		this->setName(source.getName());
		this->setLife(source.getLife());
		this->setEnergy(source.getEnergy());
		this->setAttackDmg(source.getAttackDmg());
	}
	return (*this);
}

/* ************************************************************ */
/*                                                              */
/*                        Member Functions                      */
/*                                                              */
/* ************************************************************ */

void	ScavTrap::attack(const std::string &target)
{
	if (this->lifePts <= 0)
		std::cout << "Scav " << this->name << " is dead, he can't attack" << std::endl;
	else if (this->energyPts <= 0)
		std::cout << "Scav " << this->name << " don't have enough energy to attack ¯\\_(ツ)_/¯" << std::endl;
	else
	{
		std::cout 	<< BGREEN << "Scav " << this->name << " attacks " << target
					<< " causing " << this->attackDmg
					<< " points of damage ! (ง'̀-'́)ง" 
					<< " (Energy Points left : " << --this->energyPts << ")"
					<< END << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << BMAGENTA << "ScavTrap " << this->name << " is now in Gate keeper mode ! ᕙ(⇀‸↼‶)ᕗ" << END << std::endl;
}
