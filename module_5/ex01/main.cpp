/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:13:05 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/19 11:36:17 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat serges("Serges", 3);
		Bureaucrat jack("Jack", 149);
		std::cout << serges;
		std::cout << jack;
		
		std::cout << std::endl;
		serges.gradeIncrement();	
		jack.gradeDecrement();
		serges.gradeIncrement();	
		std::cout << serges;
		std::cout << jack;
		
		std::cout << std::endl;
		std::cout << "~~ Try to decrement grade : jack.gradeDecrement(); ~~" << std::endl;
		jack.gradeDecrement();
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << std::endl << END;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "~~ Try to instanciate : Bureaucrat josette(\"Josette\", 165); ~~" << std::endl;
		Bureaucrat josette("Josette", 165);
		josette.gradeIncrement();
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << std::endl << END;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "~~ Try to instanciate : Bureaucrat gisele(\"Gisele\", 0); ~~" << std::endl;
		Bureaucrat gisele("Gisele", 0);
		gisele.gradeDecrement();
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << std::endl << END;
	}
}
