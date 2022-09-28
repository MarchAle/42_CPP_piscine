/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:53:45 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/28 14:07:02 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"

int main()
{
	std::srand(std::time(0));
	try
	{
		std::cout << WHITE << "[ TEST WITH addNumber() ]" << std::endl;
		Span sp(1000);

		sp.addNumber(100);
		sp.addNumber(11);
		sp.addNumber(4);
		sp.addNumber(-5);
		sp.addNumber(15);

		std::cout << GREEN << sp;
		std::cout << BCYAN << "ShortestSpan " << sp.shortestSpan() << std::endl;
		std::cout << BMAGENTA << "LongestSpan " << sp.longestSpan() << std::endl;
	}
	catch(const Span::TooManyElements& e)
	{
		std::cout << BRED << e.what() << END << std::endl;
	}
	catch(const Span::NotEnoughElements& e)
	{
		std::cout << BRED << e.what() << END << std::endl;
	}
	try
	{
		std::cout << std::endl << WHITE << "[ TEST WITH addLotsNumber() ]" << std::endl;
		Span sp(200);

		sp.addLotsNumber(200);
		std::cout << GREEN << sp;
		std::cout << BCYAN << "ShortestSpan " << sp.shortestSpan() << std::endl;
		std::cout << BMAGENTA << "LongestSpan " << sp.longestSpan() << std::endl;

	}
	catch(const Span::TooManyElements& e)
	{
		std::cout << BRED << e.what() << std::endl;
	}
	catch(const Span::NotEnoughElements& e)
	{
		std::cout << BRED << e.what() << std::endl;
	}
}
	