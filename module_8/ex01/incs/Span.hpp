/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:07 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/28 14:00:05 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define BRED "\x1B[91m"
# define BGREEN "\x1B[92m"
# define BYELLOW "\x1B[93m"
# define BBLUE "\x1B[94m"
# define BMAGENTA "\x1B[95m"
# define BCYAN "\x1B[96m"
# define WHITE "\x1B[97m"
# define END "\033[0m"

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