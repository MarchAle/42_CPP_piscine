/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:15:05 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/28 13:55:25 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	public:

		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &source);
		MutantStack &operator=(const MutantStack &source);

		typedef typename std::stack<T>::container_type::iterator iterator; 
		typedef typename std::stack<T>::container_type::const_iterator const_iterator; 

		typename std::stack<T>::container_type::iterator begin()
		{
			return (this->c.begin());
		}
		
		typename std::stack<T>::container_type::iterator end()
		{
			return (this->c.end());
		}

		typename std::stack<T>::container_type::const_iterator cbegin()
		{
			return (this->c.cbegin());
		}
		
		typename std::stack<T>::container_type::const_iterator cend()
		{
			return (this->c.cend());
		}
};

template <typename T>
MutantStack<T>::MutantStack()
{
	
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &source)
{
	*this = source;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &source)
{
	this->c = source.c;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	
}

#endif