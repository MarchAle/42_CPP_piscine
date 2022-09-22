/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:54:18 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 15:02:55 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class ICharacter;

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria	*inventory[4];
	public:
		Character();
		Character(const std::string name);
		Character(const Character &source);
		Character &operator=(const Character &source);
		~Character();

		
		const std::string &getName();
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif