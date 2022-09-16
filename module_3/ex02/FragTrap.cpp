/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:38:27 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/16 13:51:27 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************ */
/*                            Constructor                       */
/*                     Copy assignement operator                */
/*                            Destructor                        */
/* ************************************************************ */


FragTrap::FragTrap() : ClapTrap("Unknow")
{
	this->name = "Unknow";
	this->lifePts = 100;
	this->energyPts = 100;
	this->attackDmg = 30;
	std::cout << GREEN << "Frag Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->lifePts = 100;
	this->energyPts = 100;
	this->attackDmg = 30;
	std::cout << GREEN << "Frag Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

FragTrap::FragTrap(const FragTrap &source) : ClapTrap(source)
{
	std::cout << GREEN << "Frag Copy constructor : -- A copy of " << this->name << " has been made --" << END << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Frag Destructor : -- Destruction of " << this->name << " --" << END << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &source)
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

void	FragTrap::highFivesGuys()
{
	std::cout << BMAGENTA << "FragTrap " << this->name << " Says : Yo ! Give me five ! \\(ᵔᵕᵔ)" << END << std::endl;
}