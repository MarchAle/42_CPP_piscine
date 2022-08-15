/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:22:21 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/15 16:23:36 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define END "\033[0m"

# include <iostream>

class Animal
{
	private:
		/* data */
	protected:
		std::string	type;
	public:
		Animal(/* args */);
		Animal(const Animal &source);
		~Animal();
		Animal	&operator=(const Animal &source);
		virtual void makeSound() const;
		std::string	getType() const;
};


#endif