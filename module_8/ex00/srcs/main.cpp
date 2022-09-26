/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:02:05 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/26 10:49:54 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/easyfind.hpp"

int main()
{
	int arr[] = {1, 5, 12, 1, 3, 64, 21, 2, 4};
	{
		int	toFind = 5;
		try
		{
			easyfind<int>(arr, toFind);
			std::cout << toFind << " is in the array" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << toFind << " can't be find in the array" << std::endl;
		}
	}
	{
		int	toFind = 1;
		try
		{
			easyfind<int>(arr, toFind);
			std::cout << toFind << " is in the array" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << toFind << " can't be find in the array" << std::endl;
		}
	}
	{
		int	toFind = 88;
		try
		{
			easyfind<int>(arr, toFind);
			std::cout << toFind << " is in the array" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << toFind << " can't be find in the array" << std::endl;
		}
	}
}