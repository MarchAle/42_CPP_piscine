/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:25 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/16 14:02:34 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap1("Roger");
	ScavTrap scav1("Bruno");
	FragTrap frag1("Denis");

	std::cout << std::endl << WHITE << "~~ scav1 attacks scav1 ~~" << END << std::endl;
	scav1.attack(scav1.getName());
	scav1.takeDamage(scav1.getAttackDmg());
	
	scav1.beRepaired(15);
	scav1.attack(scav1.getName());
	scav1.takeDamage(67);
	scav1.attack(scav1.getName());
	scav1.takeDamage(20);
	scav1.attack(scav1.getName());
	scav1.takeDamage(20);
	scav1.takeDamage(20);
	scav1.beRepaired(15);
	scav1.attack(scav1.getName());
	
	std::cout << WHITE << std::endl << "~~ clap1 attacks frag1 ~~" << END << std::endl;
	clap1.attack(frag1.getName());
	frag1.takeDamage(clap1.getAttackDmg());
	frag1.highFivesGuys();
	
	std::cout << std::endl;
	return (0);
}