/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:02:05 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/28 13:59:00 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/easyfind.hpp"

int main()
{
	std::cout << WHITE << "[ Array initialisation ]" << std::endl;
	int	intArr[]  = {1, 5, 12, 1, 3, 64, 21, 2, 4};
	std::list<int> arr(intArr, intArr + (sizeof(intArr) / sizeof(int)));

	for (std::list<int>::iterator it = arr.begin(); it != arr.end(); it++)
		std::cout << BMAGENTA << *it << " ";
	std::cout << END << std::endl << std::endl;
	
	{
		int	toFind = 5;
		try
		{
			easyfind(arr, toFind);
			std::cout << BGREEN << toFind << " is in the array" << END << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << BRED << toFind << " can't be find in the array" << END << std::endl;
		}
	}
	{
		int	toFind = 1;
		try
		{
			easyfind(arr, toFind);
			std::cout << BGREEN << toFind << " is in the array" << END << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << BRED << toFind << " can't be find in the array" << END << std::endl;
		}
	}
	{
		int	toFind = 88;
		try
		{
			easyfind(arr, toFind);
			std::cout << BGREEN << toFind << " is in the array" << END << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << BRED << toFind << " can't be find in the array" << END << std::endl;
		}
	}
}