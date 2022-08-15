/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:00:10 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 14:52:27 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		/* data */
	protected:
	
	public:
		Cat(/* args */);
		Cat(const Cat &source);
		Cat &operator=(const Cat &source);
		~Cat();
		void makeSound() const;
};

#endif