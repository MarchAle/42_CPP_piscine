/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:25 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/15 15:16:15 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap zero;
	ClapTrap one("Gilles");
	ClapTrap two("Gilberte");
	ClapTrap three(one);

	std::cout << std::endl;

	one.attack(zero.getName());
	two.takeDamage(one.getAttackDmg());

	one.attack(two.getName());
	two.takeDamage(one.getAttackDmg());
	
	two.beRepaired(10);
	
	two.attack(one.getName());
	one.takeDamage(two.getAttackDmg());
	
	one.attack(two.getName());
	two.takeDamage(one.getAttackDmg());

	two.attack(one.getName());
	one.takeDamage(two.getAttackDmg());
	
	one.beRepaired(10);
	
	two.beRepaired(10);

	one.attack(two.getName());
	two.takeDamage(one.getAttackDmg());
	
	one.attack(two.getName());
	two.takeDamage(one.getAttackDmg());

	std::cout << std::endl;
	one.beRepaired(10);
	one.beRepaired(15);
	one.beRepaired(20);
	one.beRepaired(10);
	one.beRepaired(10);
	one.attack(two.getName());
	
	std::cout << std::endl;
	
	return (0);
}