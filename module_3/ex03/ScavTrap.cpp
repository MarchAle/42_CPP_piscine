/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:02:36 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/16 14:41:32 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                   Constructors / Destructor                  */
/*                                                              */
/*                                                              */
/* ************************************************************ */

ScavTrap::ScavTrap() : ClapTrap("unknow"), class_lifePts(100), class_energyPts(50), class_attackDmg(20)
{
	this->name = "Unknown";
	this->lifePts = this->class_lifePts;
	this->attackDmg = this->class_attackDmg;
	this->energyPts = this->class_energyPts;
	std::cout << GREEN << "Scav Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), class_lifePts(100), class_energyPts(50), class_attackDmg(20)
{
	this->name = name;
	this->lifePts = this->class_lifePts;
	this->attackDmg = this->class_attackDmg;
	this->energyPts = this->class_energyPts;
	std::cout << GREEN << "Scav Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source), class_lifePts(100), class_energyPts(50), class_attackDmg(20)
{
	*this = source;
	std::cout << GREEN << "Scav Copy constructor : -- Welcome " << this->name << ", you looks exactly like " << source.name << " --" << END << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Scav Destructor : -- Destruction of " << this->name << " --" << END << std::endl;

}

ScavTrap	&ScavTrap::operator=(const ScavTrap &source)
{
	if (this != &source)
	{
		std::cout << GREEN << "Scav Copy assignement : -- A copy of " << source.name << " is born ! --" << END << std::endl;
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

