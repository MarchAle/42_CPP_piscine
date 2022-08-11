/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:25 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/11 11:49:28 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap zero;
	ClapTrap one("Gilles");
	ClapTrap two("Gilberte");
	ClapTrap three(one);

	one.attack(zero.getName());
	two.takeDamage(one.getAttackDmg());

	one.attack(two.getName());
	two.takeDamage(one.getAttackDmg());
	
	two.beRepaired(10);

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
	
	two.attack(one.getName());
	one.takeDamage(two.getAttackDmg());

	one.beRepaired(10);
	one.beRepaired(10);
	one.beRepaired(10);
	one.beRepaired(10);
	one.beRepaired(10);
	one.attack(two.getName());
	
	return (0);
}