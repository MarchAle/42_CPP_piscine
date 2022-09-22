/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:46:42 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/22 10:55:37 by amarchal         ###   ########.fr       */
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
	this->age = source.getAge();
	this->name = source.getName();
	return (*this);
}

Data::~Data()
{
}

std::string Data::getName() const
{
	return (this->name);
}

int Data::getAge() const
{
	return (this->age);
}