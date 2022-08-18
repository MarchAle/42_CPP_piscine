/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:21:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/18 12:08:08 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	///////// Character creation /////////
	Character roger("ROGER");	
	Character billou("BILLOU");	
	
	///////// Materia creation /////////
	AMateria *ice1 = new Ice("ice");
	AMateria *ice2 = ice1->clone();
	AMateria *ice3 = ice2->clone();

	AMateria *cure1 = new Cure("cure");
	AMateria *cure2 = cure1->clone();

	///////// Source creation /////////
	MateriaSource *source = new MateriaSource;
	
	///////// Source learn materia /////////
	source->learnMateria(new Ice);
	source->learnMateria(new Cure);
	
	///////// Materia creation from source /////////
	AMateria *ice4 = source->createMateria("ice");
	AMateria *cure3 = source->createMateria("cure");
	
	///////// Character equip materias /////////
	roger.equip(ice1);
	roger.equip(ice2);
	roger.equip(cure1);
	roger.equip(cure3);
	
	///////// Inventory is full /////////
	roger.equip(ice3);

	///////// Unequip a materia /////////
	roger.unequip(1);

	///////// Try to equip a materia already in inventory /////////
	roger.equip(ice1);
	
	///////// Try to use materia from empty index /////////
	roger.use(1, billou);
	
	///////// Successfuly use materia /////////
	std::cout << std::endl;
	roger.use(0, billou);
	roger.use(3, billou);
	std::cout << std::endl;
	
	///////// Try to use materia from empty index /////////
	roger.use(0, billou);
	
	roger.equip(ice4);
	roger.equip(cure2);
	
	delete ice2;
	delete ice3;
	delete source;
	
	//////// MAIN DE L'ENONCE
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	
	return (0);
}