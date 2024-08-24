/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 07:26:31 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/24 11:04:30 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Fixed.hpp"

int main( void ) {
	Fixed const a( 10.05f );
	Fixed const b( 10.05f );
	Fixed const c( 42.42f );
	Fixed const d( 2.42f );

	std::cout	<< "a:" << a.toFloat()
				<< " b: " << b.toFloat()
				<< " c: " << c.toFloat()
				<< " d: " << d.toFloat()
				<< std::endl;

	// if( a > d)
	// 	std::cout << " a > d " << std::endl;
	// if( a < c)
	// 	std::cout << " a < c " << std::endl;
	// if( a <= b)
	// 	std::cout << " a <= b " << std::endl;
	// if( a >= b)
	// 	std::cout << " a >= b " << std::endl;
	// if( a == b)
	// 	std::cout << " a == b " << std::endl;
	// if( a != c)
	// 	std::cout << " a != c " << std::endl;

	// std::cout << " a + b " << a + b << std::endl;
	// std::cout << " a - b " << a - b << std::endl;
	// std::cout << " a * b " << a * b << std::endl;
	// std::cout << " a / b " << a / b << std::endl;

	// std::cout << " a++ " << a++ << std::endl;

	return 0;
}
