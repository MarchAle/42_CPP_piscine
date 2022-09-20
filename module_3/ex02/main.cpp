/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:25 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/19 11:03:54 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap1("Roger");
	ScavTrap scav1("Bruno");
	FragTrap frag1("Denis");

	std::cout << std::endl << WHITE << "~~ frag1 attacks scav1 ~~" << END << std::endl;
	frag1.attack(scav1.getName());
	scav1.takeDamage(frag1.getAttackDmg());
	scav1.beRepaired(15);
	scav1.attack(frag1.getName());
	frag1.takeDamage(scav1.getAttackDmg());
	frag1.attack(scav1.getName());
	scav1.takeDamage(80);
	frag1.attack(scav1.getName());
	scav1.takeDamage(20);
	scav1.beRepaired(15);
	
	std::cout << WHITE << std::endl << "~~ clap1 attacks frag1 ~~" << END << std::endl;
	clap1.attack(frag1.getName());
	frag1.takeDamage(clap1.getAttackDmg());
	frag1.highFivesGuys();
	
	std::cout << std::endl;
	return (0);
}