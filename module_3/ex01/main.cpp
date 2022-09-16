/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:25 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/16 13:39:09 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap clap1("Roger");
	ScavTrap scav1("Bruno");
	ScavTrap scav2;
	scav2 = scav1;
	scav2.setName("Albert");
	ScavTrap scav3(scav2);

	std::cout << std::endl << WHITE << "~~ scav1 attacks scav3 ~~" << END << std::endl;
	scav1.attack(scav3.getName());
	scav3.takeDamage(scav1.getAttackDmg());
	
	scav3.beRepaired(15);
	scav1.attack(scav3.getName());
	scav3.takeDamage(67);
	scav1.attack(scav3.getName());
	scav3.takeDamage(20);
	scav1.attack(scav3.getName());
	scav3.takeDamage(20);
	scav3.takeDamage(20);
	scav3.beRepaired(15);
	scav3.attack(scav1.getName());
	
	std::cout << WHITE << std::endl << "~~ clap1 attacks scav1 ~~" << END << std::endl;
	clap1.attack(scav1.getName());
	scav1.takeDamage(clap1.getAttackDmg());
	scav1.guardGate();
	
	std::cout << std::endl;
	return (0);
}