/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:34:23 by amarchal          #+#    #+#             */
/*   Updated: 2022/07/26 14:48:08 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	int			index;
	PhoneBook	phonebook;
	
	index = 0;
	std::string	cmd;
	std::cout << "Enter a command : ";
	while (std::getline(std::cin, cmd))
	{
		if (cmd.compare("EXIT") == 0)
			break ;
		if (cmd.compare("ADD") == 0)
		{
			phonebook.add_contact(index);
			index++;
			if (index == 8)
				index = 0;
		}
		if (cmd.compare("SEARCH") == 0)
			phonebook.search_contact();
		std::cin.clear();
		std::cout << "Enter a command : ";
	}
	return (0);
}
