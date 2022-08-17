/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:21:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/16 13:32:18 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	AAnimal *tabAnim[10];
	int arrLenght = sizeof(tabAnim) / sizeof(AAnimal *);
	
	for (int i = 0; i < arrLenght; i++)
	{
		if (i % 2)
			tabAnim[i] = new Dog;
		else
			tabAnim[i] = new Cat;
	}
	for (int i = 0; i < arrLenght; i++)
	{
		tabAnim[i]->makeSound();
		delete tabAnim[i];
	}
	
	// Dog basic;
	// Dog tmp = basic;


	//// It is impossible to instanciate the class AAnimal	
	// AAnimal test;

	return (0);
}