/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:13:05 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 14:31:25 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << WHITE << "[ Creation of bureaucrats ]" << END << std::endl;
		Bureaucrat serges("Serges", 3);
		Bureaucrat jack("Jack", 149);
		std::cout << WHITE << std::endl << "[ Bureaucrats displays their grade ]" << END << std::endl;
		std::cout << serges;
		std::cout << jack;
		
		std::cout << WHITE << std::endl << "[ Changing bureaucrat's grades ]" << END << std::endl;
		serges.gradeIncrement();	
		serges.gradeIncrement();	
		jack.gradeDecrement();
		std::cout << WHITE << std::endl << "[ Bureaucrats displays their grade ]" << END << std::endl;
		std::cout << serges;
		std::cout << jack;
		
		try
		{
			std::cout << WHITE << std::endl << "[ Try to decrement grade : jack.gradeDecrement(); ]" << END << std::endl;
			jack.gradeDecrement();
		}
		catch(const std::exception& e)
		{
			std::cout << RED << e.what() << std::endl << END;
		}
		try
		{
			std::cout << WHITE << std::endl << "[ Try to increment grade : serges.gradeIncrement(); ]" << END << std::endl;
			serges.gradeIncrement();
		}
		catch(const std::exception& e)
		{
			std::cout << RED << e.what() << std::endl << END;
		}
		
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << std::endl << END;
	}
	std::cout << std::endl;
	try
	{
		std::cout << WHITE << "[ Try to instanciate : Bureaucrat gisele(\"Gisele\", 0); ]" << END << std::endl;
		Bureaucrat gisele("Gisele", 0);
		gisele.gradeDecrement();
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << std::endl << END;
	}
	std::cout << std::endl;
	try
	{
		std::cout << WHITE << "[ Try to instanciate : Bureaucrat josette(\"Josette\", 165); ]" << END << std::endl;
		Bureaucrat josette("Josette", 165);
		josette.gradeIncrement();
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << std::endl << END;
	}
}
