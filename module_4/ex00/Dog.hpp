/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:43:49 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 14:52:06 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		/* data */
	protected:
	public:
		Dog(/* args */);
		Dog(const Dog &source);
		~Dog();
		Dog &operator=(const Dog &source);
		void	makeSound() const;
};

#endif