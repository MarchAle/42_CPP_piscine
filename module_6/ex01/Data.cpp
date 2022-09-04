/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:46:42 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/03 17:16:08 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : name("Unknow"), age(99)
{
}

Data::Data(const std::string name, int age) : name(name), age(age)
{
}

Data::Data(const Data &source)
{
	*this = source;
}

Data	&Data::operator=(const Data &source)
{
	*this = source;
	return (*this);
}

Data::~Data()
{
}

std::string Data::getName()
{
	return (this->name);
}

int Data::getAge()
{
	return (this->age);
}