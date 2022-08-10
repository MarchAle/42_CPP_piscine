/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:57:53 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/07 11:35:15 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl		Harl;
	std::string level;

	std::cout << "May I take your complain ? ";
	while (getline(std::cin, level))
	{
		Harl.complain(level);
		std::cout << "May I take your complain ? ";
	}
}