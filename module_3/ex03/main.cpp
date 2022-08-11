/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:25 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/11 16:20:11 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap_1("Clap_Gilles");

	ScavTrap scav_0;
	ScavTrap scav_1("Scav_Brouette");
	ScavTrap scav_2("Scav_Pelle");

	FragTrap frag_1("Frag_Courgette");

	clap_1.attack(scav_1.getName());
	scav_1.takeDamage(clap_1.getAttackDmg());
	scav_1.attack(clap_1.getName());
	clap_1.takeDamage(scav_1.getAttackDmg());
	
	std::cout << scav_1.getEnergy() << std::endl;
	std::cout << scav_0.getEnergy() << std::endl;
	scav_0 = scav_1;
	std::cout << scav_0.getEnergy() << std::endl;
	
	scav_1.guardGate();
	scav_0.attack(scav_1.getName());
	scav_1.takeDamage(scav_0.getAttackDmg());

	frag_1.attack(scav_1.getName());
	scav_1.takeDamage(frag_1.getAttackDmg());
	frag_1.attack(scav_1.getName());
	scav_1.takeDamage(frag_1.getAttackDmg());
	frag_1.attack(scav_1.getName());
	scav_1.takeDamage(frag_1.getAttackDmg());

	frag_1.highFivesGuys();
	
	return (0);
}