/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:22:21 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/16 13:28:58 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define END "\033[0m"

# include <iostream>
# include <array>

class AAnimal
{
	private:
		
	protected:
		std::string	type;
	public:
		AAnimal();
		AAnimal(const AAnimal &source);
		virtual ~AAnimal();
		AAnimal	&operator=(const AAnimal &source);
		virtual void makeSound() const = 0;
		std::string	getType() const;
};


#endif