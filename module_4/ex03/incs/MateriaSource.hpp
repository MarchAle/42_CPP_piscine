/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:45:42 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 16:40:31 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class IMateriaSource;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *memory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &source);
		MateriaSource &operator=(const MateriaSource &source);
		~MateriaSource();

		void	learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);
};


#endif