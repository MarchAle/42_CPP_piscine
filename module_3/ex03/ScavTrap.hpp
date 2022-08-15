/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:02:44 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/14 16:44:11 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	protected:
		const int class_lifePts;
		const int class_energyPts;
		const int class_attackDmg;
	
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &source);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &source);

		using ClapTrap::setLife;

		void	attack(const std::string &target);
		void	guardGate();
};


#endif