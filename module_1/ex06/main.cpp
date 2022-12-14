/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:57:53 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/14 12:06:25 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	Harl		Harl;

	if (ac != 2)
	{
		std::cout << WHITE << "Usage : ./HarlFilter <'DEBUG' 'INFO' 'WARNING' 'ERROR'>" << std::endl << END;
		return (0);
	}
	Harl.complain(av[1]);
	return (0);
}