/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:31:25 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 11:00:02 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICEMATERIA_HPP
# define ICEMATERIA_HPP

# include "AMateria.hpp"

class IceMateria : public AMateria
{
	private:
		/* data */
	public:
		IceMateria();
		IceMateria(const std::string type);
		IceMateria(const IceMateria &source);
		IceMateria &operator=(const IceMateria &source);
		~IceMateria();
		
		virtual IceMateria *clone() const;

};


#endif