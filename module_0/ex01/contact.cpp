/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:44:10 by amarchal          #+#    #+#             */
/*   Updated: 2022/07/26 14:44:40 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	get_field(std::string field_name)
{
	std::string str;
	std::cout << field_name + " : ";
	while (std::getline(std::cin, str))
	{
		if (!str.empty())
			return (str) ;
		std::cout << "Error : field can not be empty" << std::endl;
		std::cout << field_name + " : ";
	}
	exit(EXIT_FAILURE);
}

void	Contact::set_contact()
{
	this->first_name = get_field("first_name");
	this->last_name = get_field("last_name");
	this->nickname = get_field("nickname");
	this->phone = get_field("phone number");
	this->secret = get_field("secret");
	std::cout << std:: endl << " -- Contact successfully added to phonebook --" << std::endl << std::endl;
}

void	Contact::get_contact(int index)
{
	std::cout << std::setw(10);
	std::cout << index << "|";
	std::cout << std::setw(10);
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) + "." << "|";
	else
		std::cout << this->first_name << "|";
	std::cout << std::setw(10);
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) + "." << "|";
	else
		std::cout << this->last_name << "|";
	std::cout << std::setw(10);
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) + "." << "|" << std::endl;
	else
		std::cout << this->nickname << "|" << std::endl;
}

void	Contact::display_contact(int index)
{
	std::cout << "First name : " + this->first_name << std::endl;
	std::cout << "Last name : " + this->last_name << std::endl;
	std::cout << "Nickname : " + this->nickname << std::endl;
	std::cout << "Phone number : " + this->phone << std::endl;
	std::cout << "Secret : " + this->secret << std::endl;
}
