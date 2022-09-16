/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:27:35 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/15 15:09:49 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed 		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed		c( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const	d( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed		e( Fixed( 5.05f ) + Fixed( 2 ) );
	e = c;
	e = e;
	
	std::cout << "### Increment / Decrement tests ###" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	
	std::cout << std::endl << "### min() / max() tests ###" << std::endl;
	std::cout << "min between " << a << " and " << c << " = " << Fixed::min( a, c ) << std::endl;
	std::cout << "min between " << a << " and " << d << " = " << Fixed::min( a, d ) << std::endl;
	std::cout << "min between " << c << " and " << d << " = " << Fixed::min( c, d ) << std::endl;
	std::cout << "min between " << b << " and Fixed::min( a, c ) = " << Fixed::min( b, Fixed::min( a, c ) ) << std::endl;
	std::cout << std::endl;
	std::cout << "max between " << a << " and " << c << " = " << Fixed::max( a, c ) << std::endl;
	std::cout << "max between " << a << " and " << d << " = " << Fixed::max( a, d ) << std::endl;
	std::cout << "max between " << c << " and " << d << " = " << Fixed::max( c, d ) << std::endl;
	std::cout << "max between " << b << " and Fixed::min( a, c ) = " << Fixed::max( b, Fixed::min( a, c ) ) << std::endl;
	
	std::cout << std::endl << "### Comparaison tests ###" << std::endl;
	if (c < e)
		std::cout << c << " is inf to " << e << std::endl;
	else if (e < c)
		std::cout << e << " is inf to " << c << std::endl;
	if (c > e)
		std::cout << c << " is sup to " << e << std::endl;
	else if (e < c)
		std::cout << e << " is sup to " << c << std::endl;
	if (c <= e)
		std::cout << c << " is inf or equal to " << e << std::endl;
	else
		std::cout << e << " is inf to " << c << std::endl;
	if (c >= e)
		std::cout << c << " is sup or equal to " << e << std::endl;
	else
		std::cout << e << " is sup to " << c << std::endl;
	if (c == e)
		std::cout << c << " is equal to " << e << std::endl;
	else
		std::cout << c << " is not equal to " << e << std::endl;
	if (c != e)
		std::cout << c << " is not equal to " << e << std::endl;
	else
		std::cout << c << " is equal to " << e << std::endl;
	
	return 0;
}