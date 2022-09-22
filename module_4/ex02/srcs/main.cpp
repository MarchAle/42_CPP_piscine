/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:21:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 12:05:04 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"
#include "../incs/WrongCat.hpp"

int	main()
{
	// std::cout << "[ TRY TO INSTANCIATE ANIMAL ]" << std::endl;
	// AAnimal animal("cat");
	
	std::cout << "[ TEST TAB OF ANIMALS ]" << std::endl;
	{	
		AAnimal *tabAnim[4];
		int arrLenght = sizeof(tabAnim) / sizeof(AAnimal *);

		std::cout << "[ construction ]" << std::endl;
		for (int i = 0; i < arrLenght; i++)
		{
			std::cout << "Construction de l'animal à l'index " << i << std::endl;
			if (i % 2)
				tabAnim[i] = new Dog;
			else
				tabAnim[i] = new Cat;
			std::cout << std::endl;
		}
		std::cout << "[ destruction ]" << std::endl;
		for (int i = 0; i < arrLenght; i++)
		{
			std::cout << "Destruction de l'animal à l'index " << i << std::endl;
			tabAnim[i]->makeSound();
			delete tabAnim[i];
			std::cout << std::endl;
		}
	}
	std::cout << std::endl << "[ TEST DEEP COPY OF BRAIN ]" << std::endl;
	{
		Dog basic;
		std::cout << "----" << std::endl;
		Dog tmp = basic;
		std::cout << "----" << std::endl;
		Dog herve(basic);
		std::cout << "----" << std::endl;
		
		basic.getBrain().setIdea(1, "eat shit");
		tmp.getBrain().setIdea(2, "smell ass");
		herve.getBrain().setIdea(2, "bite grandma");
		basic.getBrain().setIdea(151, "fuck couch");

		std::cout << "----" << std::endl;
		std::cout << "basic\tidea 1 : " << basic.getBrain().getIdea(1) << std::endl;
		std::cout << "basic\tidea 2 : " << basic.getBrain().getIdea(2) << std::endl;
		std::cout << "tmp\tidea 1 : " << tmp.getBrain().getIdea(1) << std::endl;
		std::cout << "tmp\tidea 2 : " << tmp.getBrain().getIdea(2) << std::endl;
		std::cout << "herve\tidea 1 : " << herve.getBrain().getIdea(1) << std::endl;
		std::cout << "herve\tidea 2 : " << herve.getBrain().getIdea(2) << std::endl;
		std::cout << "----" << std::endl;
	}	
	return (0);
}