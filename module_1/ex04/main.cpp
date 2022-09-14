/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:20:41 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/14 16:28:59 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	replace(std::string str, std::string needle, std::string insert)
{
	int pos;

	pos = str.find(needle);
	while (pos != -1 && needle.length())
	{
		str.erase(pos, needle.length());
		str.insert(pos, insert);
		pos = str.find(needle, pos + insert.length());
	}
	return (str);
}

int	error(int type)
{
	if (type == ARG_ERROR)
		std::cout << "Usage : \"./Replace <filename> <s1> <s2>\"" << std::endl;
	if (type == INFILE_ERROR)
		std::cout << "Could not open file" << std::endl;
	if (type == OUTFILE_ERROR)
		std::cout << "Could not write on this file" << std::endl;
	return (1);
}

int	main(int ac, char *av[])
{
	std::string line;
	int pos;

	if (ac != 4)
		return (error(ARG_ERROR));
	std::ifstream	src (av[1]);
	std::string 	needle = av[2];
	std::string 	insert = av[3];
	if (src.fail())
		return (error(INFILE_ERROR));
	std::string		dst_name = av[1];
	dst_name.append(".replace");
	std::ofstream	dst (dst_name);
	if (dst.fail())
		return (error(OUTFILE_ERROR));
	while (std::getline(src, line))
		dst << replace(line, needle, insert) << std::endl;
	src.close();
	dst.close();
}