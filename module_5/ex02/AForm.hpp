/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:55:12 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/21 15:54:28 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
// # include <iostream>

class AForm
{
	private:
		const std::string 	name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
	public:
		AForm();
		AForm(const std::string name, const int grade_to_sign, const int grade_to_execute);
		AForm(const AForm &source);
		AForm &operator=(const AForm &source);
		~AForm();

		void		beSigned(const Bureaucrat &bureaucrat);
		virtual void		execute(const Bureaucrat &executor) = 0;
		
		const std::string getName() const;
		bool		getStatus() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;

		class GradeTooHighException : public std::exception 
		{
			public:
				virtual const char * what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		
		class UnsignedFormException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream 	&operator<<(std::ostream &stream, const AForm &source);

#endif