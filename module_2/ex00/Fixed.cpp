/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:27:49 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/15 11:46:34 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************ */
/*                            Constructor                       */
/*                     Copy assignement operator                */
/*                            Destructor                        */
/* ************************************************************ */

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(source.getRawBits());
	return (*this);
}

/* ************************************************************ */
/*                                                              */
/*                      Member functions                        */
/*                                                              */
/* ************************************************************ */

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->nb = raw;
}
