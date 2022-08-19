/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:28:01 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/18 15:18:18 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					nb;
		static const int	bits = 8;
		
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &source);
		~Fixed();
		
		// const Fixed 	&operator=(const Fixed &source);
		Fixed 			&operator=(const Fixed &source);
		
		bool 	operator<(const Fixed &source);
		bool 	operator>(const Fixed &source);
		bool 	operator>=(const Fixed &source);
		bool 	operator<=(const Fixed &source);
		bool 	operator==(const Fixed &source);
		bool 	operator!=(const Fixed &source);
		
		Fixed 	operator+(const Fixed &source);
		Fixed 	operator-(const Fixed &source);
		Fixed 	operator*(const Fixed &source);
		Fixed 	operator/(const Fixed &source);
		
		Fixed 	operator++();
		Fixed 	operator++(int);
		Fixed 	operator--();
		Fixed 	operator--(int);

		Fixed		static &min(Fixed &s1, Fixed &s2);
		const Fixed	static &min(const Fixed &s1, const Fixed &s2);
		Fixed		static &max(Fixed &s1, Fixed &s2);
		const Fixed	static &max(const Fixed &s1, const Fixed &s2);
		
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream 	&operator<<(std::ostream &stream, const Fixed &source);

#endif