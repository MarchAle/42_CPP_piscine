/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:00:10 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/20 11:25:26 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat &source);
		Cat &operator=(const Cat &source);
		virtual ~Cat();
		
		void makeSound() const;
		Brain &getBrain();
};

#endif