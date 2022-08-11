/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:38:27 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/11 16:20:55 by amarchal         ###   ########.fr       */
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

FragTrap::FragTrap()
{
	this->name = "Unknown";
	this->setLife(100);
	this->setEnergy(100);
	this->setAttackDmg(30);
	std::cout << GREEN << "Frag Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->setLife(100);
	this->setEnergy(100);
	this->setAttackDmg(30);
	std::cout << GREEN << "Frag Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

FragTrap::FragTrap(const FragTrap &source)
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
	std::cout << PURPLE << this->name << " Says : Yo ! Give me five ! \\(ᵔᵕᵔ)" << END << std::endl;
}