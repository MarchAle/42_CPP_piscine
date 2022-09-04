/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:29:33 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/03 16:25:18 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void convert(std::string input, int type)
{
	if (type == CHAR)
		convertChar(input);		
	if (type == INT)
		convertInt(input);		
	if (type == DOUBLE)
		convertDouble(input);
	if (type == FLOAT)
		convertFloat(input);
	if (type == -1)
		std::cout << "Error : please enter <char> <int> <float> or <double> value" << std::endl;
	
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error : wrong number of arguments" << std::endl;
		return (0);
	}
	convert(av[1], checkType(av[1]));
	return (0);
}