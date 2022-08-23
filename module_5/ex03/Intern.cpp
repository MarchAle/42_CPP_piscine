/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:16:34 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/23 10:49:49 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << BYELLOW << "Welcome filthy intern " << END << std::endl;
	this->funcTab[0] = Intern::makeShrubberyForm;
	this->funcTab[1] = Intern::makeRobotomyForm;
	this->funcTab[2] = Intern::makePresidentialForm;
}

Intern::Intern(const Intern &source)
{
	std::cout << BYELLOW << "Welcome filthy intern " << END << std::endl;
	*this = source;
}

Intern	&Intern::operator=(const Intern &source)
{
	return (*this);
}

Intern::~Intern()
{
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Functions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

int	nameIndex(const std::string name, std::string *formNames)
{
	for (int i = 0; i < 3; i++)
	{
		if (formNames[i].compare(name) == 0)
			return (i);
	}
	return (-1);
}

AForm *Intern::makeForm(const std::string name, const std::string target)
{
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = nameIndex(name, formNames);

	if (i != -1)
	{
		std::cout << BGREEN << "✓ Intern created form \'" << name << "\'" << END << std::endl;
		return (funcTab[i](target));	
	}
	std::cout << BRED << "✗ Stupid intern tries to create a form named \"" << name << "\"" << END << std::endl;
	return (NULL);
}

AForm *Intern::makeShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makePresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}