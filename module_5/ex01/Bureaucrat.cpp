/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:52:18 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/19 13:31:21 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unknow"), grade(150)
{
	std::cout << "Welcome " << this->name << " you have been assignated the grade " << this->grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << "Welcome " << this->name << " you have been assignated the grade " << this->grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &source) : name(source.name)
{
	this->grade = source.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &source)
{
	*this = source;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                           Exceptions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("EXCEPTION : Grade given is to High");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("EXCEPTION : Grade given is to Low");
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Functions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	Bureaucrat::gradeIncrement()
{
	if (this->getGrade() - 1 == 0)
	{
		std::cout << BGREEN << this->getName() << " is already the big boss" << std::endl << END;
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade--;
	std::cout << BGREEN << this->getName() << " has been promoted rank " << this->getGrade() << "! Clap clap clap" << std::endl << END;
}

void	Bureaucrat::gradeDecrement()
{
	if (this->getGrade() + 1 > 150)
	{
		std::cout << BRED << this->getName() << " can't be any shittier .." << std::endl << END;
		throw Bureaucrat::GradeTooLowException();
	}
	this->grade++;
	std::cout << BRED << this->getName() << " has been retrograded rank " << this->getGrade() << ". Bouuuh" << std::endl << END;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                             Getter                           */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                         Overload                             */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &source)
{
	stream << BBLUE << source.getName() << ", bureaucrat grade " << source.getGrade() << "." << END << std::endl;
	return (stream);
}