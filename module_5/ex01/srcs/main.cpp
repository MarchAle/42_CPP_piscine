/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:13:05 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/21 16:24:17 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Form.hpp"

int main()
{
	try
	{
		Bureaucrat philémon("Philémon", 16);
		std::cout << std::endl;
		
		Form form1("A38", 15, 5);
		Form form2("A27", 40, 55);
		Form form3 = form1;
		Form form4(form2);

		////// Uncomment to throw an exception ////////
		// Form form5("C032", 100, 151);
		// Form form6("D77", 1, 0);
		
		std::cout << std::endl;

		std::cout << form1;
		std::cout << form4 << std::endl;

		philémon.signForm(form1);
		philémon.signForm(form4);
		std::cout << std::endl;

		std::cout << form1;
		std::cout << form4 << std::endl;

		philémon.gradeIncrement();
		std::cout << std::endl;
		
		philémon.signForm(form1);
		std::cout << std::endl;
		
		std::cout << form1;
		std::cout << form4 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
}
