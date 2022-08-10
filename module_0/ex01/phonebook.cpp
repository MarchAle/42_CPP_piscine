/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:04:32 by amarchal          #+#    #+#             */
/*   Updated: 2022/07/26 14:34:35 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact(int index)
{
	this->contacts[index].set_contact();
}

void	print_header()
{
	std::cout << std::setw(10);
	std::cout << "index" << "|";
	std::cout << std::setw(10);
	std::cout << "first_name" << "|";
	std::cout << std::setw(10);
	std::cout << "last_name" << "|";
	std::cout << std::setw(10);
	std::cout << "nickname" << "|" << std::endl;	
}

void	PhoneBook::search_contact()
{
	std::string	search_index;

	print_header();
	for (int i = 0; i < 8; i++)
		this->contacts[i].get_contact(i + 1);
	std::cout << "index to search : ";
	while (std::getline(std::cin, search_index))
	{
		if (search_index.length() == 1 && std::isdigit(search_index[0]) && std::stoi(search_index) > 0 && std::stoi(search_index) < 9)
		{
			this->contacts[std::stoi(search_index) - 1].display_contact(std::stoi(search_index));
			break ;
		}
		std::cin.clear();
		std::cout << "invalid index" << std::endl << "index to search : ";
	}
	std::cin.clear();
}
