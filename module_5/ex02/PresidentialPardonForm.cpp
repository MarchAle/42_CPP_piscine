/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:50:24 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/21 17:29:06 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()  : AForm("PresidentialPardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : target(target), AForm("PresidentialPardon", 25, 5)
{	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source) : AForm(source.getName(), 25, 5)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &source)
{
	return (*this);
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
	std::cout << BYELLOW << "~~ " << this->target << " has been pardonned by our almighty Zaphod Beeblebox ~~" << END << std::endl;

}