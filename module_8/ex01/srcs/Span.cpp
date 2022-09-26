/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:53:58 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/26 17:41:26 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"

Span::Span(unsigned int n) : size(n)
{
}

Span::Span(const Span &source)
{
	*this = source;
}

Span &Span::operator=(const Span &source)
{
	this->size = source.size;
	this->container = source.container;	
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(int nb)
{
	static int nbElem = 0;
	if (nbElem < this->size)
	{
		this->container.push_back(nb);	
		nbElem++;
	}
	else
		throw Span::TooManyElements();
}

void	Span::addLotsNumber(int n)
{
	if (n > this->size)
		throw Span::TooManyElements();
	std::vector<int> toInsert(n, 0);
	for(int i = 0; i < n; i++)
	{
		toInsert[i] = rand() % 1000;
	}
	this->container.insert(this->container.begin(), toInsert.begin(), toInsert.end());
}

int	Span::shortestSpan()
{
	int distance = -1;
	int currentDist;
	
	if (this->container.size() < 2)
		throw Span::NotEnoughElements();
	for(std::vector<int>::iterator i = this->container.begin(); i != this->container.end(); i++)
	{
		for(std::vector<int>::iterator j = i + 1; j != this->container.end(); j++)
		{
			currentDist = std::abs(*i - *j);
			if (currentDist < distance || distance == -1)
				distance = currentDist;
		}
	}
	return (distance);
}

int	Span::longestSpan()
{
	int distance = -1;
	int currentDist;
	
	if (this->container.size() < 2)
		throw Span::NotEnoughElements();
	for(std::vector<int>::iterator i = this->container.begin(); i != this->container.end(); i++)
	{
		for(std::vector<int>::iterator j = i + 1; j != this->container.end(); j++)
		{
			currentDist = std::abs(*i - *j);
			if (currentDist > distance || distance == -1)
				distance = currentDist;
		}
	}
	return (distance);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                           Exceptions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::vector<int> Span::getContainer()
{
	return (this->container);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                           Exceptions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

const char * Span::TooManyElements::what() const throw()
{
	return ("EXCEPTION : can't add that much element in the array");
}

const char * Span::NotEnoughElements::what() const throw()
{
	return ("EXCEPTION : not enough element in arrray to compare");
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Overload                          */
/*                                                              */
/*                                                              */
/* ************************************************************ */

std::ostream &operator<<(std::ostream &stream, const Span &source)
{
	Span tmp = source;
	for (size_t i = 0; i < tmp.getContainer().size(); i++)
	{
		stream << tmp.getContainer().at(i) << " ";
	}
	stream << std::endl;
	return (stream);
}