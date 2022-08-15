/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:32:02 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 11:32:26 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
	this->FragTrap::setLife(FragTrap::class_lifePts);
	this->ScavTrap::setEnergy(ScavTrap::class_energyPts);
	this->FragTrap::setAttackDmg(FragTrap::class_attackDmg);
	std::cout << GREEN << "Diamond Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : name(name), ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->FragTrap::setLife(FragTrap::class_lifePts);
	this->ScavTrap::setEnergy(ScavTrap::class_energyPts);
	this->FragTrap::setAttackDmg(FragTrap::class_attackDmg);
	std::cout << GREEN << "Diamond Constructor : -- Welcome " << this->name << " --" << END << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &source)
{
	*this = source;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Diamond Destructor : -- Destruction of " << this->name << " --" << END << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &source)
{
	if (this != &source)
	{
		std::cout << GREEN << "Diamond Copy assignement : -- A copy of " << source.name << " is born ! --" << END << std::endl;
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

void	DiamondTrap::whoAmI()
{
	std::cout << PURPLE << "My DiamondTrap name is " << this->name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::getName() << END << std::endl;
}
