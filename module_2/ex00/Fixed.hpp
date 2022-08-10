/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:28:01 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/07 15:57:57 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					nb;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &source);
		~Fixed();
		Fixed 	&operator=(const Fixed &source);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

#endif