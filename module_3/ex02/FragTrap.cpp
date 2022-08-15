/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:38:27 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 11:44:12 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                   Constructors / Destructor                  */
/*                                                              */
/*                                                              */
/* ************************************************************ */

FragTrap::FragTrap() : class_lifePts(100), class_energyPts(100), class_attackDmg(30)
{
	this->name = "Unknown";
	this->lifePts = this->class_lifePts;
	this->attackDmg = this->class_attackDmg;
	this->energyPts = this->class_energyPts;
	std::cout << GREEN << "Frag Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

FragTrap::FragTrap(std::string name) : class_lifePts(100), class_energyPts(100), class_attackDmg(30)
{
	this->name = name;
	this->lifePts = this->class_lifePts;
	this->attackDmg = this->class_attackDmg;
	this->energyPts = this->class_energyPts;
	std::cout << GREEN << "Frag Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

FragTrap::FragTrap(const FragTrap &source) : class_lifePts(100), class_energyPts(100), class_attackDmg(30)
{
	*this = source;
	std::cout << GREEN << "Frag Copy constructor : -- Welcome " << this->name << ", you looks exactly like " << source.name << " --" << END << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Frag Destructor : -- Destruction of " << this->name << " --" << END << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &source)
{
	if (this != &source)
	{
		std::cout << GREEN << "Frag Copy assignement : -- A copy of " << source.name << " is born ! --" << END << std::endl;
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

void	FragTrap::highFivesGuys()
{
	std::cout << PURPLE << "FragTrap " << this->name << " Says : Yo ! Give me five ! \\(ᵔᵕᵔ)" << END << std::endl;
}