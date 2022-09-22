/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:41:05 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/22 10:46:04 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

void	convertChar(std::string input)
{
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << "char\t:\t'" << input << "'" << std::endl;
	std::cout << "int\t:\t" << static_cast<int>(input[0]) << std::endl;
	std::cout << "float\t:\t" << static_cast<float>(input[0]) << "f" << std::endl;
	std::cout << "double\t:\t" << static_cast<double>(input[0]) << std::endl;
}

void	intOverflow()
{
		std::cout << "char\t:\t" << "Impossible" << std::endl;
		std::cout << "int\t:\t" << "Overflow" << std::endl;
		std::cout << "float\t:\t" << "Impossible" << std::endl;
		std::cout << "double\t:\t" << "Impossible" << std::endl;
}

void	convertInt(std::string input)
{
	long value;
	
	if (input.length() > 11)
		intOverflow();
	else
	{
		value = std::stol(input);
		if (value < INT_MIN || value > INT_MAX)
		{
			intOverflow();
			return ;
		}
		std::cout << std::fixed;
		std::cout.precision(1);
		if ((value >= 0 && value < 32) || value == 127)
			std::cout << "char\t:\t" << "Non displayable" << std::endl;
		else if (value < 0 || value > 127)
			std::cout << "char\t:\t" << "Impossible" << std::endl;
		else
			std::cout << "char\t:\t'" << static_cast<char>(value) << "'" << std::endl;
		std::cout << "int\t:\t" << static_cast<int>(value) << std::endl;
		std::cout << "float\t:\t" << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double\t:\t" << static_cast<double>(value) << std::endl;
	}
}

int		floatPrecision(std::string input)
{
	int i = 0;
	int dotPosition;
	
	while (input[i])
	{
		if (input[i] == '.')
			dotPosition = i;
		i++;
	}
	return (i - dotPosition - 1 > 7 ? 7 : i - dotPosition - 1);
}

int		doublePrecision(std::string input)
{
	int i = 0;
	int dotPosition;
	
	while (input[i])
	{
		if (input[i] == '.')
			dotPosition = i;
		i++;
	}
	return (i - dotPosition - 1 > 15 ? 15 : i - dotPosition - 1);
}

void	convertDouble(std::string input)
{
	double 	value;

	value = std::atof(input.c_str());
	std::cout << std::fixed;
	if ((value >= 0 && value < 32) || value == 127)
		std::cout << "char\t:\t" << "Non displayable" << std::endl;
	else if (value < 0 || value > 127 || input.compare("nan") == 0)
		std::cout << "char\t:\t" << "Impossible" << std::endl;
	else
		std::cout << "char\t:\t'" << static_cast<char>(value) << "'" << std::endl;
	if (value < INT_MIN || value > INT_MAX || input.compare("nan") == 0)
		std::cout << "int\t:\t" << "Impossible" << std::endl;
	else
		std::cout << "int\t:\t" << static_cast<int>(value) << std::endl;
	std::cout.precision(floatPrecision(input));
	std::cout << "float\t:\t" << static_cast<float>(value) << "f" << std::endl;
	std::cout.precision(doublePrecision(input));
	std::cout << "double\t:\t" << static_cast<double>(value) << std::endl;
}

void	convertFloat(std::string input)
{
	float	value;

	value = static_cast <float>(std::atof(input.c_str()));
	std::cout << std::fixed;
	if ((value >= 0 && value < 32) || value == 127)
		std::cout << "char\t:\t" << "Non displayable" << std::endl;
	else if (value < 0 || value > 127 || input.compare("nanf") == 0)
		std::cout << "char\t:\t" << "Impossible" << std::endl;
	else
		std::cout << "char\t:\t'" << static_cast<char>(value) << "'" << std::endl;
	if (value < INT_MIN || value > INT_MAX || input.compare("nanf") == 0)
		std::cout << "int\t:\t" << "Impossible" << std::endl;
	else
		std::cout << "int\t:\t" << static_cast<int>(value) << std::endl;
	std::cout.precision(floatPrecision(input.substr(0, input.length() - 1)));
	std::cout << "float\t:\t" << static_cast<float>(value) << "f" << std::endl;
	std::cout.precision(doublePrecision(input.substr(0, input.length() - 1)));
	std::cout << "double\t:\t" << static_cast<double>(value) << std::endl;
}
