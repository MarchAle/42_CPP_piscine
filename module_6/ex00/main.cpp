/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:29:33 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/24 12:02:54 by amarchal         ###   ########.fr       */
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
		std::cout << "oui c'est un double" << std::endl;
	if (type == FLOAT)
		std::cout << "oui c'est un float" << std::endl;
	if (type == -1)
		std::cout << "c'est de la merde" << std::endl;
	
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	convert(av[1], checkType(av[1]));
	return (0);
}