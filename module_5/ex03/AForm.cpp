/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:55:27 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/22 15:20:24 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : is_signed(0), name("unknown"), grade_to_execute(1), grade_to_sign(1)
{
	std::cout << GREEN << "Default Form successfuly created" << END << std::endl;
}

AForm::AForm(const std::string name, const int grade_to_sign, const int grade_to_execute) : is_signed(0), name(name), grade_to_execute(grade_to_execute), grade_to_sign(grade_to_sign)
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

AForm::AForm(const AForm &source) : name(source.name), is_signed(source.is_signed), grade_to_execute(source.grade_to_execute), grade_to_sign(source.grade_to_sign)
{
}

AForm &AForm::operator=(const AForm &source)
{
	*this = source;
	return (*this);
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