/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:43:26 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/15 14:11:40 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
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