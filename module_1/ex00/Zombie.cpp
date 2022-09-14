/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:38:56 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/14 10:43:58 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << BGREEN << "Construction of " << name << END << std::endl;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << BRED << "Destruction of " << this->name << END << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << BLUE << this->name << ": BraiiiiiiinnnzzzZ..." << END << std::endl;
}
