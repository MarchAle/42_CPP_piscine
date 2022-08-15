/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:46:45 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:27:47 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animal.hpp"

class WrongAnimal
{
	private:
	
	protected:
		std::string type;
	public:
		WrongAnimal(/* args */);
		WrongAnimal(const WrongAnimal &source);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &source);
		void makeSound() const;
		std::string getType() const;
};

#endif