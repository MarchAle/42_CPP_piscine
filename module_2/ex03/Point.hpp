/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:32:29 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/10 13:49:18 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &source);
		~Point();
		
		Point	&operator=(Point &source);
		
		float	getX() const;
		float	getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif