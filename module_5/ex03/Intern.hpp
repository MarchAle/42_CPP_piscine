/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:16:24 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/23 10:50:06 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
	private:
		static AForm *makeShrubberyForm(std::string target);
		static AForm *makeRobotomyForm(std::string target);
		static AForm *makePresidentialForm(std::string target);
		AForm *(*funcTab[3])(std::string target);
	public:
		Intern();
		Intern(const Intern &source);
		Intern &operator=(const Intern &source);
		~Intern();

		AForm * makeForm(const std::string name, const std::string target);
};

#endif