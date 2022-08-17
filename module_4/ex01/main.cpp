/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:21:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/16 11:34:42 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal *tabAnim[10];
	int arrLenght = sizeof(tabAnim) / sizeof(Animal *);
	
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

	return (0);
}