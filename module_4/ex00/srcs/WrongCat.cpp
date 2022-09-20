/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:06:15 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/19 14:16:58 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << MAGENTA << "WrongCat's default constructor called" << END << std::endl;
}

WrongCat::WrongCat(const WrongCat &source)
{
	this->type = "WrongCat";
	std::cout << MAGENTA << "WrongCat's copy constructor called" << END << std::endl;
	*this = source;
}

WrongCat::~WrongCat()
{
	std::cout << MAGENTA << "WrongCat's destructor called" << END << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &source)
{
	this->type = source.getType();
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
	std::cout << MAGENTA << "Wrong miaou wrong miaou .." << END << std::endl;
}