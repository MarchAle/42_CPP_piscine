/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:22:21 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/20 11:03:58 by amarchal         ###   ########.fr       */
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
# include <array>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal &source);
		Animal	&operator=(const Animal &source);
		virtual ~Animal();
		
		virtual void makeSound() const;
		std::string	getType() const;
};

#endif