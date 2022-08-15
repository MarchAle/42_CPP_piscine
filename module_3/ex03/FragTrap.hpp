/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:37:33 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/14 16:37:46 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:
		const int class_lifePts;
		const int class_energyPts;
		const int class_attackDmg;
		
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &source);
		~FragTrap();

		FragTrap	&operator=(const FragTrap &source);

		void	highFivesGuys(void);
};



#endif