/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:53:45 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/26 17:40:57 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"

int main()
{
	std::srand(std::time(0));
	try
	{
		std::cout << "[ TEST WITH addNumber() ]" << std::endl;
		Span sp(10);

		sp.addNumber(100);
		sp.addNumber(11);
		sp.addNumber(4);
		sp.addNumber(-5);
		sp.addNumber(15);

		std::cout << sp;
		std::cout << "ShortestSpan " << sp.shortestSpan() << std::endl;
		std::cout << "LongestSpan " << sp.longestSpan() << std::endl;
	}
	catch(const Span::TooManyElements& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Span::NotEnoughElements& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << "[ TEST WITH addLotsNumber() ]" << std::endl;
		Span sp(10000);

		sp.addLotsNumber(10000);
		// std::cout << sp;
		std::cout << "ShortestSpan " << sp.shortestSpan() << std::endl;
		std::cout << "LongestSpan " << sp.longestSpan() << std::endl;

	}
	catch(const Span::TooManyElements& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Span::NotEnoughElements& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}