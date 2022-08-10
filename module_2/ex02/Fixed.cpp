/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:27:49 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/09 15:25:30 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                   Constructors / Destructor                  */
/*                                                              */
/*                                                              */
/* ************************************************************ */

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed(const int n)
{
	this->setRawBits(n * (1 << this->bits));
}

Fixed::Fixed(const float f)
{
	this->setRawBits(roundf(f * (1 << this->bits)));
}

Fixed::Fixed(const Fixed &source)
{
	*this = source;
}

Fixed::~Fixed()
{
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                 Assignation & Other functions                */
/*                                                              */
/*                                                              */
/* ************************************************************ */

Fixed &Fixed::operator=(const Fixed &source)
{
	this->setRawBits(source.getRawBits());
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->nb / (1 << this->bits));
}

int	Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

int Fixed::getRawBits() const
{
	return (this->nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->nb = raw;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &source)
{
	stream << source.toFloat();
	return (stream);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                     Comparaison operators                    */
/*                                                              */
/*                                                              */
/* ************************************************************ */

bool	Fixed::operator<(const Fixed &source)
{
	return (this->toFloat() < source.toFloat());
}

bool	Fixed::operator>(const Fixed &source)
{
	return (this->toFloat() > source.toFloat());
}

bool	Fixed::operator>=(const Fixed &source)
{
	return (this->toFloat() >= source.toFloat());
}

bool	Fixed::operator<=(const Fixed &source)
{
	return (this->toFloat() <= source.toFloat());
}

bool	Fixed::operator==(const Fixed &source)
{
	return (this->toFloat() == source.toFloat());
}

bool	Fixed::operator!=(const Fixed &source)
{
	return (this->toFloat() != source.toFloat());
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                     Arithmetic operators            	        */
/*                                                              */
/*                                                              */
/* ************************************************************ */

Fixed	Fixed::operator+(const Fixed &source)
{
	return (Fixed(this->toFloat() + source.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &source)
{
	return (Fixed(this->toFloat() - source.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &source)
{
	return (Fixed(this->toFloat() * source.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &source)
{
	return (Fixed(this->toFloat() / source.toFloat()));
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                 In/Decrementation operators                  */
/*                                                              */
/*                                                              */
/* ************************************************************ */

Fixed	Fixed::operator++() 		// pre-incrementation ++a
{
	Fixed	tmp;
	
	tmp.nb = ++this->nb;
	return (tmp);
}

Fixed	Fixed::operator++(int)		// post_incrementation a++
{
	Fixed	tmp = *this;
	
	++(*this);
	return (tmp);
}

Fixed	Fixed::operator--() 		// pre-decrementation --a
{
	Fixed	tmp;
	
	tmp.nb = --this->nb;
	return (tmp);
}

Fixed	Fixed::operator--(int)		// post_decrementation a--
{
	Fixed	tmp = *this;
	
	--(*this);
	return (tmp);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                       Min/Max functions                      */
/*                                                              */
/*                                                              */
/* ************************************************************ */

Fixed	&Fixed::min(Fixed &s1, Fixed &s2)
{
	if (s1.toFloat() < s2.toFloat())
		return (s1);
	else
		return (s2);
}

const Fixed &Fixed::min(const Fixed &s1, const Fixed &s2)
{
	if (s1.toFloat() < s2.toFloat())
		return (s1);
	else
		return (s2);
}

Fixed	&Fixed::max(Fixed &s1, Fixed &s2)
{
	if (s1.toFloat() > s2.toFloat())
		return (s1);
	else
		return (s2);
}

const Fixed &Fixed::max(const Fixed &s1, const Fixed &s2)
{
	if (s1.toFloat() > s2.toFloat())
		return (s1);
	else
		return (s2);
}