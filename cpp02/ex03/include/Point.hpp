/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:45:06 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/29 12:33:13 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include"Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const Point& orig);
		Point& operator=(const Point& orig);
		Point(const float fpn_x, const float fpn_y);
		~Point(void);

		const Fixed& getCoordinateX(void) const;
		const Fixed& getCoordinateY(void) const;


	private:
		const Fixed _x;
		const Fixed _y;
		// Coordinate Struct?
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif



// Point& operator=(const Point& orig) = delete;
/*
Using = delete is a powerful way to control how objects of a class can be used.
In the case of your Point class, it’s used to prevent the assignment of
one Point object to another, which is necessary because of the const members
that cannot be modified after initialization.
*/
