/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:50:07 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/29 12:33:08 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/Point.hpp"


Point::Point(void){}
Point::Point(const float fpn_x, const float fpn_y) : _x(fpn_x), _y(fpn_y){}
Point::Point(const Point& orig) : _x(orig._x), _y(orig._y) {}
Point::~Point(void){}

Point& Point::operator=(const Point& orig)
{
	if(this == &orig)
		return (*this);
	return (*this);
}

const Fixed& Point::getCoordinateX(void) const
{
	return (_x);
}

const Fixed& Point::getCoordinateY(void) const
{
	return (_y);
}


float calcAreaOfTriangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float res;

	res = 0.5 * (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
	if(res < 0)
		res = -res;
	return res;
}

bool validate_size(float size)
{
	if(size == 0)
		return false;
	return true;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float a_x = a.getCoordinateX().toFloat();
	float a_y = a.getCoordinateY().toFloat();
	float b_x = b.getCoordinateX().toFloat();
	float b_y = b.getCoordinateY().toFloat();
	float c_x = c.getCoordinateX().toFloat();
	float c_y = c.getCoordinateY().toFloat();
	float point_x = point.getCoordinateX().toFloat();
	float point_y = point.getCoordinateY().toFloat();


	float area_of_abc = calcAreaOfTriangle(a_x, a_y, b_x, b_y, c_x, c_y);
	float area_of_abp = calcAreaOfTriangle(a_x, a_y, b_x, b_y, point_x, point_y);
	float area_of_acp = calcAreaOfTriangle(a_x, a_y, c_x, c_y, point_x, point_y);
	float area_of_bcp = calcAreaOfTriangle(b_x, b_y, c_x, c_y, point_x, point_y);


	std::cout << "area_of_abc " << area_of_abc << std::endl;
	std::cout << "area_of_abp "<< area_of_abp << std::endl;
	std::cout << "area_of_acp "<< area_of_acp << std::endl;
	std::cout << "area_of_bcp " << area_of_bcp << std::endl;
	std::cout << "Sum of single triangles :" << area_of_abp + area_of_acp + area_of_bcp << std::endl;
	if(!validate_size(area_of_abp) || !validate_size(area_of_acp) || !validate_size(area_of_bcp))
		return(false);
	if(area_of_abc == (area_of_abp + area_of_acp + area_of_bcp))
		return(true);
	return(false);
}

