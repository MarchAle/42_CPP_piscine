/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:25 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 11:38:30 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	ScavTrap	scav_1("Grüdu");
	FragTrap	frag_1("Roparzh");
	DiamondTrap diamond_1("Elias");

	std::cout << "I am a ScavTrap named " << scav_1.getName() << ", my characteristics are :" << std::endl;
	std::cout << "LifePts : " << scav_1.getLife() << ", EnergyPts : " << scav_1.getEnergy() << ", AttackDmg : " << scav_1.getAttackDmg() << std::endl << std::endl;
	std::cout << "I am a FragTrap named " << frag_1.getName() << ", my characteristics are :" << std::endl;
	std::cout << "LifePts : " << frag_1.getLife() << ", EnergyPts : " << frag_1.getEnergy() << ", AttackDmg : " << frag_1.getAttackDmg() << std::endl << std::endl;
	std::cout << "I am a DiamondTrap, my characteristics are :" << std::endl;
	std::cout << "LifePts : " << diamond_1.getLife() << ", EnergyPts : " << diamond_1.getEnergy() << ", AttackDmg : " << diamond_1.getAttackDmg() << std::endl << std::endl;
	
	std::cout  << "Who Am I ??" << std::endl;
	diamond_1.whoAmI();
	std::cout << std::endl;

	std::cout << "I can use the specials functions of my parents. Look at that :" << std::endl;
	diamond_1.guardGate();
	diamond_1.highFivesGuys();
	std::cout << std::endl;
	
	std::cout << "And I can attack like a ScavTrap :" << std::endl;
	diamond_1.attack(frag_1.getName());
	std::cout << std::endl;
	
	return (0);
}