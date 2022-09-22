/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:13:05 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/22 09:56:58 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/Intern.hpp"

int main()
{
	std::srand(std::time(0));
	try
	{
		Bureaucrat philémon("Philémon", 73);
		Bureaucrat josiette("Josiette", 48);
		Bureaucrat zaphod("Zaphod", 1);
		Intern stagiaire;
		std::cout << std::endl;
		
		AForm *form1;
		AForm *form2;
		AForm *form3;
		AForm *form4;
		form1 = stagiaire.makeForm("shrubbery creation", "Armand");		
		form2 = stagiaire.makeForm("robotomy request", "Odile");		
		form3 = stagiaire.makeForm("presidential pardon", "Clitorin");		
		form4 = stagiaire.makeForm("blabla", "Bobby");		
		std::cout << std::endl;

		std::cout << *form1;
		std::cout << *form2;
		std::cout << *form3 << std::endl;

		philémon.signForm(*form1);
		philémon.signForm(*form2);
		philémon.signForm(*form3);
		std::cout << std::endl;

		std::cout << *form1;
		std::cout << *form2;
		std::cout << *form3 << std::endl;

		philémon.gradeIncrement();
		std::cout << std::endl;
		
		philémon.signForm(*form2);
		std::cout << std::endl;
		
		std::cout << *form1;
		std::cout << *form2;
		std::cout << *form3 << std::endl;

		philémon.executeForm(*form1);
		josiette.executeForm(*form2);
		zaphod.executeForm(*form3);
		std::cout << std::endl;

		zaphod.signForm(*form3);
		std::cout << std::endl;
		
		std::cout << *form1;
		std::cout << *form2;
		std::cout << *form3 << std::endl;
		
		zaphod.executeForm(*form2);
		zaphod.executeForm(*form3);

		delete form1;
		delete form2;
		delete form3;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
}
