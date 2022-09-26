/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:07 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/26 16:19:31 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private:
		std::vector<int> 	container;
		int 				size;
	public:
		Span(unsigned int n);
		Span(const Span &source);
		Span &operator=(const Span &source);
		~Span();

		void	addNumber(int nb);
		void	addLotsNumber(int n);
		int		shortestSpan();
		int		longestSpan();

		class TooManyElements : public std::exception 
		{
			public:
				virtual const char * what() const throw();
		};
		
		class NotEnoughElements : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		std::vector<int> getContainer();
};

std::ostream 	&operator<<(std::ostream &stream, const Span &source);


#endif