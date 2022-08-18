/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:25:41 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/18 10:08:50 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure();
	Cure(const std::string &type);
	Cure(const Cure &source);
	Cure &operator=(const Cure &source);
	~Cure();

	virtual AMateria *clone() const;
};

#endif