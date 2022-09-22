/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:21:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 11:46:02 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Ice.hpp"
#include "../incs/Cure.hpp"
#include "../incs/Character.hpp"
#include "../incs/MateriaSource.hpp"

int	main()
{
	///////// Character creation /////////
	std::cout << WHITE << "[ Character creation ]" << std::endl;
	Character roger("ROGER");	
	Character billou("BILLOU");	
	
	///////// Materia creation /////////
	std::cout << std::endl << WHITE << "[ Materia creation ]" << std::endl;
	AMateria *ice1 = new Ice();
	AMateria *ice2 = ice1->clone();
	AMateria *ice3 = ice2->clone();

	AMateria *cure1 = new Cure();
	AMateria *cure2 = cure1->clone();

	///////// Source creation /////////
	std::cout << std::endl << WHITE << "[ Source creation ]" << std::endl;
	MateriaSource *source = new MateriaSource;
	
	///////// Source learn materia /////////
	std::cout << std::endl << WHITE << "[ Source learn materia ]" << std::endl;
	source->learnMateria(new Ice);
	source->learnMateria(new Cure);
	
	///////// Materia creation from source /////////
	std::cout << std::endl << WHITE << "[ Materia creation from source ]" << std::endl;
	AMateria *ice4 = source->createMateria("ice");
	AMateria *cure3 = source->createMateria("cure");
	
	///////// Character equip materias /////////
	std::cout << std::endl << WHITE << "[ Character equip materia ]" << std::endl;
	roger.equip(ice1);
	roger.equip(ice2);
	roger.equip(cure1);
	roger.equip(cure3);
	
	///////// Inventory is full /////////
	std::cout << std::endl << WHITE << "[ Inventory is full ]" << std::endl;
	roger.equip(ice3);

	///////// Unequip a materia /////////
	std::cout << std::endl << WHITE << "[ Unequip materia ]" << std::endl;
	roger.unequip(1);
	
	///////// Try to equip a materia already in inventory /////////
	std::cout << std::endl << WHITE << "[ Try to equip a materia already in inventory ]" << std::endl;
	roger.equip(ice1);
	
	///////// Try to use materia from empty index /////////
	std::cout << std::endl << WHITE << "[ Try to use materia from empty index ]" << std::endl;
	roger.use(1, billou);
	
	///////// Successfuly use materia /////////
	std::cout << std::endl << WHITE << "[ Successfuly use materia ]" << std::endl;
	roger.use(0, billou);
	roger.use(3, billou);
	
	///////// Try to use materia from empty index /////////
	std::cout << std::endl << WHITE << "[ Try to use materia from empty index ]" << std::endl;
	roger.use(0, billou);
	
	///////// Character equip materias /////////
	std::cout << std::endl << WHITE << "[ Character equip materia ]" << std::endl;
	roger.equip(ice4);
	roger.equip(cure2);
	
	///////// Delete materias non equiped /////////
	std::cout << std::endl << WHITE << "[ Delete materias non equiped ]" << std::endl;
	delete ice2;
	delete ice3;
	delete source;
	
	///////// Delete materias in characters inventories /////////
	std::cout << std::endl << WHITE << "[ Delete materias in characters inventories ]" << std::endl;
	
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