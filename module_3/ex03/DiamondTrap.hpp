/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:32:36 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/16 14:38:39 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
		
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &source);
		~DiamondTrap();
		DiamondTrap	&operator=(const DiamondTrap &source);
		
		using	ScavTrap::attack;
		std::string	getName() const;
		void	whoAmI();
};


#endif