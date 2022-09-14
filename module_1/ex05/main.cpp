/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:57:53 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/14 11:58:51 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl		Harl;
	std::string level;

	std::cout << "May I take your complain ? 'DEBUG' 'INFO' 'WARNING' 'ERROR'" << std::endl << BMAGENTA;
	while (getline(std::cin, level))
	{
		std::cout << END;
		Harl.complain(level);
		std::cout << "May I take your complain ? 'DEBUG' 'INFO' 'WARNING' 'ERROR'" << std::endl << BMAGENTA;
	}
}