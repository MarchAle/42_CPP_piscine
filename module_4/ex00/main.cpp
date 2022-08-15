/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:21:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:34:48 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat= new Cat();
	
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	
	delete animal;
	delete dog;
	delete cat;
	
	std::cout << std::endl;
	//// TEST SUJET 1 ////
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	//// TEST SUJET 2 ////
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const WrongAnimal* i = new WrongCat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	delete meta;
	delete j;
	delete i;
	
	return (0);
}