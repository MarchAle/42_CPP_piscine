/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:50:24 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/22 11:40:04 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()  : AForm("RobotomyForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : target(target), AForm("RobotomyForm", 72, 45)
{	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &source) : AForm(source.getName(), 72, 45)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &source)
{
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Functions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	if (this->getStatus() == 0)
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	std::cout << BYELLOW << "* Brrrrr zzZZZziiiZIIiiii ZZiii *" << END << std::endl;
	if (std::rand() % 2)
		std::cout << BGREEN << this->target << " has been successfuly robotomized !" << END << std::endl;
	else
		std::cout << BRED << "Mmmh it seems that the robotomization of " << this->target << " failed.. Oups" << END << std::endl;
}
