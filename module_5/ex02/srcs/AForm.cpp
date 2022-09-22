/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:55:27 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 17:28:51 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AForm.hpp"

AForm::AForm() : name("unknown"), is_signed(0), grade_to_sign(1), grade_to_execute(1)
{
	std::cout << GREEN << "Default Form successfuly created" << END << std::endl;
}

AForm::AForm(const std::string name, const int grade_to_sign, const int grade_to_execute) : name(name), is_signed(0), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if (this->grade_to_execute < 1 || this->grade_to_sign < 1)
	{
		std::cout << RED << "Grade given to form is to hight" << END << std::endl;
		throw AForm::GradeTooHighException();
	}
	if (this->grade_to_execute > 150 || this->grade_to_sign > 150)
	{
		std::cout << RED << "Grade given to form is to low" << END << std::endl;;
		throw AForm::GradeTooLowException();
	}
	std::cout << GREEN << "Form " << this->name << " successfuly created" << END << std::endl;
}

AForm &AForm::operator=(const AForm &source)
{
	this->is_signed = source.getStatus();
	return (*this);
}

AForm::AForm(const AForm &source) : name(source.name), is_signed(source.is_signed), grade_to_sign(source.grade_to_sign), grade_to_execute(source.grade_to_execute)
{
}

AForm::~AForm()
{
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Functions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade_to_sign)
		throw AForm::GradeTooLowException();
	this->is_signed = 1;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                           Exceptions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

const char * AForm::GradeTooHighException::what() const throw()
{
	return ("EXCEPTION : Grade given is to High");
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return ("EXCEPTION : Grade given is to Low");
}

const char * AForm::UnsignedFormException::what() const throw()
{
	return ("EXCEPTION : Form is not signed");
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                             Getter                           */
/*                                                              */
/*                                                              */
/* ************************************************************ */

const std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getStatus() const
{
	return (this->is_signed);	
}

int	AForm::getExecuteGrade()	const
{
	return (this->grade_to_execute);
}

int	AForm::getSignGrade() const
{
	return (this->grade_to_sign);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                             Setter                           */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	AForm::setStatus(bool status)
{
	this->is_signed = status;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                         Overload                             */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::ostream &operator<<(std::ostream &stream, const AForm &source)
{
	stream 	<< BBLUE << "~~~~ Form Informations ~~~~" << std::endl
			<< BBLUE << "Form name : " << WHITE << source.getName() << std::endl
			<< BBLUE << "Grade required to sign : " << WHITE << source.getSignGrade() << std::endl
			<< BBLUE << "Grade required to execute : " << WHITE << source.getExecuteGrade() << std::endl
			<< BBLUE << "Status : " << (source.getStatus() ? GREEN : RED) 
			<< (source.getStatus() ? "signed" : "not signed") << END << std::endl;
	return (stream);
}