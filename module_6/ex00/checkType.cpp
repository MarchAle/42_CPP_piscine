/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:38:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/24 13:38:47 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	isChar(std::string input)
{
	if (input.length() == 1 && !std::isdigit(input[0]))
		return (1);
	return (0);
}

int isInt(std::string input)
{
	int start = 0;
	
	if (input[0] == '-')
		start = 1;
	for (int i = start; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
			return (0);
	}
	return (1);
}

int isDouble(std::string input)
{
	int start = 0;
	int pointCount = 0;
	
	if (!input.compare("-inf") || !input.compare("+inf") || !input.compare("nan"))
		return (1);
	if (input[0] == '-')
		start = 1;
	if (!std::isdigit(input[start]) || !std::isdigit(input[input.length() - 1]))
		return (0);
	for (int i = start; i < input.length() - 1; i++)
	{
		if (!std::isdigit(input[i]) && input[i] != '.')
			return (0);
		if (input[i] == '.')
			pointCount++;
	}
	if (pointCount == 1)
		return (1);
	return (0);
}

int isFloat(std::string input)
{
	int start = 0;
	int pointCount = 0;
	
	if (!input.compare("-inff") || !input.compare("+inff") || !input.compare("nanf") || !input.compare("-infF") || !input.compare("+infF") || !input.compare("nanF"))
		return (1);
	if (input[0] == '-')
		start = 1;
	if (input[input.length() - 1] != 'f' && input[input.length() - 1] != 'F')
		return (0);
	if (!std::isdigit(input[start]) || !std::isdigit(input[input.length() - 2]))
		return (0);
	for (int i = start; i < input.length() - 2; i++)
	{
		if (!std::isdigit(input[i]) && input[i] != '.')
			return (0);
		if (input[i] == '.')
			pointCount++;
	}
	if (pointCount == 1)
		return (1);
	return (0);
}

int	checkType(std::string input)
{
	if (isChar(input))
		return (CHAR);
	if (isInt(input))
		return (INT);
	if (isDouble(input))
		return (DOUBLE);
	if (isFloat(input))
		return (FLOAT);
	return (-1);
}
