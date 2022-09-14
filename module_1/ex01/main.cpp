/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:38:42 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/14 10:56:04 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int	horde_size;

	horde_size = 5;
	Zombie* Horde = zombieHorde(horde_size, "Gilles");
	for (int i = 0; i < horde_size; i++)
		Horde[i].announce();
	delete [] Horde;
}