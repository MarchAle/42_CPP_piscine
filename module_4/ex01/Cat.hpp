/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:00:10 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/16 11:13:54 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* catBrain;
	protected:
	
	public:
		Cat();
		Cat(const Cat &source);
		Cat &operator=(const Cat &source);
		virtual ~Cat();
		
		void makeSound() const;
};

#endif