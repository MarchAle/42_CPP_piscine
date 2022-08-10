/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:27:35 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/10 13:56:10 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
	/// Point in triangle ///
	Point a(-3.5f, -1.5);
	Point b(5, 1.2f);
	Point c(-1.8, 4);
	Point point_in(-2, 2);
	
	if (bsp(a, b, c, point_in))
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point does not belong to the triangle" << std::endl;
		
	/// Point NOT in triangle ///
	Point point_out(2.5f, 2.5f);
	point_out = a;
	
	if (bsp(a, b, c, point_out))
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point does not belong to the triangle" << std::endl;
		
	return 0;
}