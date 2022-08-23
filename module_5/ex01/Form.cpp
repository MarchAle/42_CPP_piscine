/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:55:27 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/22 15:21:29 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : is_signed(0), name("unknown"), grade_to_execute(1), grade_to_sign(1)
{
	std::cout << GREEN << "Default Form successfuly created" << END << std::endl;
}

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_execute) : is_signed(0), name(name), grade_to_execute(grade_to_execute), grade_to_sign(grade_to_sign)
{
	if (this->grade_to_execute < 1 || this->grade_to_sign < 1)
	{
		std::cout << RED << "Grade given to form is to hight" << END << std::endl;
		throw Form::GradeTooHighException();
	}
	if (this->grade_to_execute > 150 || this->grade_to_sign > 150)
	{
		std::cout << RED << "Grade given to form is to low" << END << std::endl;;
		throw Form::GradeTooLowException();
	}
	std::cout << GREEN << "Form " << this->name << " successfuly created" << END << std::endl;
}

Form::Form(const Form &source) : name(source.name), is_signed(source.is_signed), grade_to_execute(source.grade_to_execute), grade_to_sign(source.grade_to_sign)
{
}

Form &Form::operator=(const Form &source)
{
	*this = source;
	return (*this);
}

Form::~Form()
{
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Functions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade_to_sign)
		throw Form::GradeTooLowException();
	this->is_signed = 1;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                           Exceptions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

const char * Form::GradeTooHighException::what() const throw()
{
	return ("EXCEPTION : Grade given is to High");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("EXCEPTION : Grade given is to Low");
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                             Getter                           */
/*                                                              */
/*                                                              */
/* ************************************************************ */

const std::string Form::getName() const
{
	return (this->name);
}

bool Form::getStatus() const
{
	return (this->is_signed);	
}

int	Form::getExecuteGrade()	const
{
	return (this->grade_to_execute);
}

int	Form::getSignGrade() const
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

std::ostream &operator<<(std::ostream &stream, const Form &source)
{
	stream << BBLUE << "~~~~ Form Informations ~~~~" << std::endl
					<< "Form name : " << source.getName() << std::endl
					<< "Grade required to sign : " << source.getSignGrade() << std::endl
					<< "Grade required to execute : " << source.getExecuteGrade() << std::endl
					<< "Status : " << (source.getStatus() ? GREEN : RED) 
					<< (source.getStatus() ? "signed" : "not signed") << END << std::endl;
	return (stream);
}