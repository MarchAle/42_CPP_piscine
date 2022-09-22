/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:55:12 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 16:35:22 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string 	name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
	public:
		Form();
		Form(const std::string name, const int grade_to_sign, const int grade_to_execute);
		Form(const Form &source);
		Form &operator=(const Form &source);
		~Form();

		void		beSigned(const Bureaucrat &bureaucrat);
		
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
};

std::ostream 	&operator<<(std::ostream &stream, const Form &source);

#endif