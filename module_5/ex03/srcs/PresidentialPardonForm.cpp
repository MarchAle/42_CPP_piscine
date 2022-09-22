/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:50:24 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 17:31:16 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()  : AForm("PresidentialPardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardon", 25, 5), target(target)
{	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source) : AForm(source.getName(), 25, 5), target(source.getTarget())
{
	this->setStatus(source.getStatus());
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Functions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	if (this->getStatus() == 0)
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	std::cout << BYELLOW << "~~ " << this->target << " has been pardonned by Zaphod Beeblebox the almighty ~~" << END << std::endl;

}

const std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}