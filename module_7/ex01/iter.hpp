/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:31:55 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/04 15:41:08 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

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

template< typename T>
void	printContent(T &content)
{
	std::cout << content << " ";
}

template< typename T >
void iter(T *tab, int size, void (*fct)(T&))
{
	for (int i = 0; i < size; i++)
	{
		fct(tab[i]);
	}
}

template< typename T >
void iter(const T *tab, int size, void (*fct)(const T&))
{
	for (int i = 0; i < size; i++)
	{
		fct(tab[i]);
	}
}

#endif