/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:50:24 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/21 18:03:41 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()  : AForm("ShrubForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : target(target), AForm("ShrubForm", 145, 137)
{	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source) : AForm(source.getName(), 145, 137)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &source)
{
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Functions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::string draw_tree()
{
	std::string tree;

	tree = "               ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88\'\n   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888\'\n   %&&%/ %&%%&&@@\\ V /@@\' `88\\8 `/88\'\n   `&%\\ ` /%&\'    |.|        \\ \'|8\'\n       |o|        | |         | |\n       |.|        | |         | |\n    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
	return (tree);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
	if (this->getStatus() == 0)
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	std::ofstream shrubberyFile (this->target + "_shrubbery");
	shrubberyFile << draw_tree() << std::endl;
	shrubberyFile.close();
	std::cout << BYELLOW << "~~ Some beautiful trees have grown in " << this->target << "'s backyard ~~" << END << std::endl;
}
