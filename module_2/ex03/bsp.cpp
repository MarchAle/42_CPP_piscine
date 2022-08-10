/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:43:26 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/10 12:02:04 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "a : " << a.getX() << " " << a.getY() << std::endl;
	std::cout << "b : " << b.getX() << " " << b.getY() << std::endl;
	std::cout << "c : " << c.getX() << " " << c.getY() << std::endl;
	std::cout << "point : " << point.getX() << " " << point.getY() << std::endl;
	float var1 = ((c.getX() - point.getX()) * (a.getY() - point.getY()) - (c.getY() - point.getY()) * (a.getX() - point.getX()));
	float var2 = ((a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX()));
	float var3 = ((b.getX() - point.getX()) * (c.getY() - point.getY()) - (b.getY() - point.getY()) * (c.getX() - point.getX()));
	
	if (var1 >= 0 && var2 >= 0 && var3 >= 0)
		return (1);
	else if (var1 < 0 && var2 < 0 && var3 < 0)
		return (1);
	else
		return (0);
}