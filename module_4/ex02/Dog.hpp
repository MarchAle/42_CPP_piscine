/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:43:49 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/16 13:24:45 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* dogBrain;
	protected:
	public:
		Dog();
		Dog(const Dog &source);
		Dog &operator=(const Dog &source);
		virtual ~Dog();
		
		void	makeSound() const;
};

#endif