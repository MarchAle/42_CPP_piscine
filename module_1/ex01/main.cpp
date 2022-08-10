/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:38:42 by amarchal          #+#    #+#             */
/*   Updated: 2022/07/30 15:46:00 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int	horde_size;

	horde_size = 3;
	Zombie* Horde = zombieHorde(horde_size, "Gilles");
	for (int i = 0; i < horde_size; i++)
		Horde[i].announce();
	delete [] Horde;
}