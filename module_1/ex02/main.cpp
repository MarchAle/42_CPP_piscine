/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:51:35 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/14 11:02:28 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << "string address :\t" << &string << std::endl;
	std::cout << "stringPTR address :\t" << stringPTR << std::endl;
	std::cout << "stringREF address :\t" << &stringREF << std::endl;
	std::cout << "string value :\t\t" << string << std::endl;
	std::cout << "stringPTR value :\t" << *stringPTR << std::endl;
	std::cout << "stringREF value :\t" << stringREF << std::endl;
}
