/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:46 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/11 11:32:26 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define END "\033[0m"

class ClapTrap
{
	private:
		std::string name;
		int			lifePts;
		int			energyPts;
		int			attackDmg;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &source);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &source);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		std::string	getName();
		int			getLife();
		int			getEnergy();
		int			getAttackDmg();

		void		setName(std::string name);
		void		setLife(int life);
		void		setEnergy(int energy);
		void		setAttackDmg(int attackDmg);
};

#endif