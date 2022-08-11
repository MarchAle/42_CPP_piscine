/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:02:36 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/11 15:27:41 by amarchal         ###   ########.fr       */
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

ScavTrap::ScavTrap()
{
	this->name = "Unknown";
	this->setLife(100);
	this->setEnergy(50);
	this->setAttackDmg(20);
	std::cout << GREEN << "Scav Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->setLife(100);
	this->setEnergy(50);
	this->setAttackDmg(20);
	std::cout << GREEN << "Scav Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source)
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
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	ScavTrap::attack(const std::string &target)
{
	if (this->energyPts <= 0 && this->lifePts > 0)
	{
		std::cout << "Dumb ScavTrap " << this->name << " tries to attacks without energy ¯\\_(ツ)_/¯" << std::endl;
	}
	else if (this->energyPts > 0 && this->lifePts > 0)
	{
		std::cout 	<< YELLOW << "ScavTrap " << this->name << " attacks " << target
					<< " causing " << this->attackDmg
					<< " points of damage ! （　ﾟДﾟ）" << END << std::endl;
		this->energyPts--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << PURPLE << "ScavTrap " << this->name << " is now in Gate keeper mode !" << END << std::endl;
}
