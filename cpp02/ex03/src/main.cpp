/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 07:26:31 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/29 12:36:43 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

int main( void )
{
	Point a(0.1,0.1);
	Point b(-5.5,0);
	Point c(0,-5.5);
	Point d(-2.6,-2.6);
	bool inside;

	inside = bsp(a,b,c,d);

if(inside)
	std::cout << "TRUE" << std::endl;
else
	std::cout << "FALSE" << std::endl;


	return 0;
}
