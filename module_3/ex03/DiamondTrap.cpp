/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:32:02 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/16 14:39:55 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap("unknow_clap_name"), ScavTrap("unknow_scav_name"), FragTrap("unknow_frag_name")
{
	this->setName("Unknow");
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
	std::cout << GREEN << "Diamond Copy constructor : -- A copy of " << this->name << " has been made --" << END << std::endl;

}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Diamond Destructor : -- Destruction of " << this->name << " --" << END << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &source)
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

std::string	DiamondTrap::getName() const
{
	return (this->name);
}

void	DiamondTrap::whoAmI()
{
	std::cout << BMAGENTA << "My DiamondTrap name is " << this->getName() << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::getName() << END << std::endl;
}
