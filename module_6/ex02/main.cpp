/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:27:20 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/04 11:27:56 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int randNb = 1 + rand() % 3;
	switch (randNb)
	{
		case 1:
			std::cout << GREEN << "Base A created" << END << std::endl;
			return (new A);
			break;
		case 2:
			std::cout << GREEN << "Base B created" << END << std::endl;
			return (new B);
			break;
		case 3:
			std::cout << GREEN << "Base C created" << END << std::endl;
			return (new C);
			break;
		default:
			std::cout << RED << "An error occured" << END << std::endl;
		return (NULL);
			break;
	}
}

void	identify(Base *p)
{
	std::cout << WHITE << "Identification by pointer. Pending..." << std::endl << "Result : " << END;
	A *tmpA = dynamic_cast<A*>(p);
	B *tmpB = dynamic_cast<B*>(p);
	C *tmpC = dynamic_cast<C*>(p);
	if (tmpA)
		std::cout << BLUE << "Type is A" << END << std::endl;
	else if (tmpB)
		std::cout << MAGENTA << "Type is B" << END << std::endl;
	else if (tmpC)
		std::cout << CYAN << "Type is C" << END << std::endl;
	else
		std::cout << RED << "Type is nor A nor B nor C" << END << std::endl;
}

void	identify(Base &p)
{
	std::cout << WHITE << "Identification by reference. Pending..." << std::endl << "Result : " << END;
	try
	{
		A &tmp = dynamic_cast<A&>(p);
		std::cout << BLUE << "Type is A" << END << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		B &tmp = dynamic_cast<B&>(p);
		std::cout << MAGENTA << "Type is B" << END << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		C &tmp = dynamic_cast<C&>(p);
		std::cout << CYAN << "Type is C" << END << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	std::cout << RED << "Type is nor A nor B nor C" << END << std::endl;
}

int main()
{
	std::srand(std::time(0));
	
	Base *base = generate();
	Base *sourceBase = new (Base);
	std::cout << std::endl;
	
	identify(base);
	identify(*base);
	std::cout << std::endl;
	
	identify(sourceBase);
	identify(*sourceBase);
}
