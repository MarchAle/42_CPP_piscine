/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:41:05 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/24 13:56:34 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

void	convertChar(std::string input)
{
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << "char: '" << input << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(input[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input[0]) << std::endl;
}

void	convertInt(std::string input)
{
	long value;
	if (input.length() > 11)
	{
		std::cout << "Input overflow range of int values" << std::endl;
		return ;
	}
	value = std::stol(input);
	if (value < INT_MIN || value > INT_MAX)
	{
		std::cout << "Input overflow range of int values" << std::endl;
		return ;
	}
	std::cout << std::fixed;
	std::cout.precision(1);
	if (value < 32 || value > 126)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}