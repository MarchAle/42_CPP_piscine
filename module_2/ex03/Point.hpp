/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:32:29 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/15 14:03:27 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define BRED "\x1B[91m"
# define BGREEN "\x1B[92m"
# define BYELLOW "\x1B[93m"
# define BBLUE "\x1B[94m"
# define BMAGENTA "\x1B[95m"
# define BCYAN "\x1B[96m"
# define WHITE "\x1B[97m"
# define END "\033[0m"

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