/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:03:06 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/26 10:40:55 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template< typename T>
void	easyfind(T *container, int nb)
{
	int contSize = sizeof(container) / sizeof(int);
	int *first;
	
	first = std::find(container, container + contSize, nb);
	if (first == container + contSize)
		throw (std::exception());
}


#endif