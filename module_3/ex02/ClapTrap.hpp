/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:38:46 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/15 14:43:56 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define BRED "\x1B[91m"
# define BGREEN "\x1B[92m"
# define BYELLOW "\x1B[93m"
# define BBLUE "\x1B[94m"
# define BMAGENTA "\x1B[95m"
# define BCYAN "\x1B[96m"
# define WHITE "\x1B[97m"
# define END "\033[0m"

class ClapTrap
{
	protected:
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

		std::string	getName() const;
		int			getLife() const;
		int			getEnergy() const;
		int			getAttackDmg() const;

		void		setName(std::string name);
		void		setLife(int life);
		void		setEnergy(int energy);
		void		setAttackDmg(int attackDmg);
};

#endif