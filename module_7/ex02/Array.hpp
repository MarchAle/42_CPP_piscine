/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:51:04 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/14 10:28:35 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

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

template <typename T>
class Array
{
	private:
		int		nbOfEl;
		T		*arr;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &source);
		Array &operator=(const Array<T> &source);
		~Array();

		T &operator[] (int n);
		const T &operator[] (int n) const;
		int size();
		void show();

		class BadIndexException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};


template <typename T>
Array<T>::Array()
{
	this->nbOfEl = 0;
	this->arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->nbOfEl = n;
	this->arr = new T[n];
	for (int i = 0; i < this->nbOfEl; i++)
	{
		this->arr[i] = 0;
	}
}

template <typename T>
Array<T>::Array(const Array<T> &source)
{
	this->nbOfEl = source.nbOfEl;
	this->arr = new T[nbOfEl];
	for (int i = 0; i < nbOfEl; i++)
	{
		this->arr[i] = source.arr[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &source)
{
	if (this != &source)
	{
		delete this->arr;
		this->nbOfEl = source.nbOfEl;
		this->arr = new T[nbOfEl];
		for (int i = 0; i < nbOfEl; i++)
		{
			this->arr[i] = source.arr[i];
		}		
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->arr;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                          Member functions                    */
/*                                                              */
/*                                                              */
/* ************************************************************ */

template <typename T>
int Array<T>::size()
{
	return (this->nbOfEl);
}

template <typename T>
void Array<T>::show()
{
	for (int i = 0; i < this->nbOfEl; i++)
	{
		std::cout << this->arr[i] << " ";
	}
	std::cout << std::endl;
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                            Overload                          */
/*                                                              */
/*                                                              */
/* ************************************************************ */

template <typename T>
T &Array<T>::operator[](int n)
{
	if (n >= this->nbOfEl || n < 0)
		throw Array<T>::BadIndexException();
	return (this->arr[n]);
}

template <typename T>
const T &Array<T>::operator[](int n) const
{
	if (n >= this->nbOfEl || n < 0)
		throw Array<T>::BadIndexException();
	return (this->arr[n]);
}

/* ************************************************************ */
/*                                                              */
/*                                                              */
/*                           Exceptions                         */
/*                                                              */
/*                                                              */
/* ************************************************************ */

template <typename T>
const char * Array<T>::BadIndexException::what() const throw()
{
	return ("EXCEPTION : Bad Index");
}

#endif
