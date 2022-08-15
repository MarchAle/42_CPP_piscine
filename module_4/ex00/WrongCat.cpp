/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:06:15 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:28:24 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */)
{
	this->type = "WrongCat";
	std::cout << PURPLE << "WrongCat's default constructor called" << END << std::endl;
}

WrongCat::WrongCat(const WrongCat &source)
{
	this->type = "WrongCat";
	std::cout << PURPLE << "WrongCat's copy constructor called" << END << std::endl;
	*this = source;
}

WrongCat::~WrongCat()
{
	std::cout << PURPLE << "WrongCat's destructor called" << END << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &source)
{
	std::cout << PURPLE << "WrongCat's assignator called" << END << std::endl;
	return (*this);
}


/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                        Action Functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

void	WrongCat::makeSound() const
{
	std::cout << PURPLE << "Wrong miaou wrong miaou .." << END << std::endl;
}