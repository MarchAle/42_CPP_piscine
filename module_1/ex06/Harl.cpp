/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:58:16 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/14 12:03:32 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl << END;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << BLUE << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl << END;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl << END;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << RED << "This is unacceptable! I want to speak to the manager now.\n" << std::endl << END;
}

void	Harl::complain(std::string  level)
{
	for (int i = 0; i < 5; i++)
	{
		if (this->indexTab[i] == level || i == 4)
		{
			switch (i)
			{
			case 0:
				(this->*funcPtr[0])();
				(this->*funcPtr[1])();
				(this->*funcPtr[2])();
				(this->*funcPtr[3])();
				break;
				
			case 1:
				(this->*funcPtr[1])();
				(this->*funcPtr[2])();
				(this->*funcPtr[3])();
				break;
				
			case 2:
				(this->*funcPtr[2])();
				(this->*funcPtr[3])();
				break;

			case 3:
				(this->*funcPtr[3])();
				break;
			
			default:
				std::cout << BMAGENTA << "[ Probably complaining about insignificant problems ]" << std::endl << END;
				break;
			}
			break;
		}
	}
}

Harl::Harl()
{
	this->indexTab[0] = "DEBUG";
	this->indexTab[1] = "INFO";
	this->indexTab[2] = "WARNING";
	this->indexTab[3] = "ERROR";
	this->funcPtr[0] = (&Harl::debug);
	this->funcPtr[1] = (&Harl::info);
	this->funcPtr[2] = (&Harl::warning);
	this->funcPtr[3] = (&Harl::error);
}

Harl::~Harl()
{
}

