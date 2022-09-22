/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:50:24 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 17:31:28 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()  : AForm("RobotomyForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyForm", 72, 45), target(target)
{	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &source) : AForm(source.getName(), 72, 45), target(source.getTarget())
{
	this->setStatus(source.getStatus());
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

const std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}
