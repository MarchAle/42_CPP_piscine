/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:25:41 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 10:59:56 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUREMATERIA_HPP
# define CUREMATERIA_HPP

# include "AMateria.hpp"

class CureMateria : public AMateria
{
private:
	/* data */
public:
	CureMateria();
	CureMateria(const std::string &type);
	CureMateria(const CureMateria &source);
	CureMateria &operator=(const CureMateria &source);
	~CureMateria();

	virtual AMateria *clone() const;
};

#endif