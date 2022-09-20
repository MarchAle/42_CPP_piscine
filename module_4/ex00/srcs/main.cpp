/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:21:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/19 15:27:08 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"
#include "../incs/WrongCat.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << BGREEN << "~~ Animal ~~" << END << std::endl;
	std::cout << std::endl;

	const Animal* animal1 = new Animal();
	const Animal* animal2 = new Dog();
	const Animal* animal3 = new Cat();

	std::cout << std::endl;
	std::cout << "animal 1 type : " << animal1->getType() << std::endl;
	std::cout << "animal 2 type : " << animal2->getType() << std::endl;
	std::cout << "animal 3 type : " << animal3->getType() << std::endl;

	std::cout << std::endl;
	animal1->makeSound();
	animal2->makeSound();
	animal3->makeSound();
	std::cout << std::endl;

	delete animal1;
	delete animal2;
	delete animal3;

	std::cout << std::endl;
	std::cout << BGREEN << "~~ Wrong Animal ~~" << END << std::endl;
	std::cout << std::endl;

	const WrongAnimal*	wrongAnimal1 = new WrongAnimal();
	const WrongAnimal*	wrongAnimal2 = new WrongCat();
	const WrongCat*		wrongCat = new WrongCat();

	std::cout << std::endl;
	std::cout << "wrongAnimal1 type : " << wrongAnimal1->getType() << std::endl;
	std::cout << "wrongAnimal2 type : " << wrongAnimal2->getType() << std::endl;
	std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;
	std::cout << std::endl;

	wrongAnimal1->makeSound();
	wrongAnimal2->makeSound();
	wrongCat->makeSound();
	std::cout << std::endl;

	delete wrongAnimal1;
	delete wrongAnimal2;
	delete wrongCat;
	
	// std::cout << std::endl;
	// //// TEST SUJET 1 ////
	// // const Animal* meta = new Animal();
	// // const Animal* j = new Dog();
	// // const Animal* i = new Cat();
	// // std::cout << j->getType() << " " << std::endl;
	// // std::cout << i->getType() << " " << std::endl;
	// // i->makeSound(); //will output the cat sound!
	// // j->makeSound();
	// // meta->makeSound();
	
	// // delete meta;
	// // delete i;
	// // delete j;
	
	// //// TEST SUJET 2 ////
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const WrongAnimal* i = new WrongCat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the wrong animal sound!
	// j->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete i;
	// delete j;
	
	return (0);
}