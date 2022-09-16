/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:31:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/15 14:04:06 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* ************************************************************ */
/*                            Constructor                       */
/*                     Copy assignement operator                */
/*                            Destructor                        */
/* ************************************************************ */

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &source) : x(source.getX()), y(source.getY())
{
}

Point	&Point::operator=(Point &source)
{
	return (source);
}

Point::~Point()
{
}

/* ************************************************************ */
/*                                                              */
/*                      Member functions                        */
/*                                                              */
/* ************************************************************ */

float Point::getX() const
{
	return (this->x.toFloat());
}

float Point::getY() const
{
	return (this->y.toFloat());
}
