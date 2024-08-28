/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 07:26:31 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/28 17:59:04 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Fixed.hpp"

int main( void ) {
	Fixed a( 10.05f );
	Fixed b( 10.05f );
	Fixed c( 42.42f );
	Fixed d( 2 );

	std::cout	<< "a:" << a.toFloat()
				<< " b: " << b.toFloat()
				<< " c: " << c.toFloat()
				<< " d: " << d.toFloat()
				<< std::endl;

	if( a > d)
		std::cout << " a > d " << std::endl;
	if( a < c)
		std::cout << " a < c " << std::endl;
	if( a <= b)
		std::cout << " a <= b " << std::endl;
	if( a >= b)
		std::cout << " a >= b " << std::endl;
	if( a == b)
		std::cout << " a == b " << std::endl;
	if( a != c)
		std::cout << " a != c " << std::endl;

	std::cout << " a + b " << a + b << std::endl;
	std::cout << " a - b " << a - b << std::endl;
	std::cout << " a * b " << a * b << std::endl;
	std::cout << " a / b " << a / b << std::endl;

	std::cout << a << " ++a " << ++a << std::endl;
	std::cout << a << " --a " << --a << std::endl;

	std::cout << b << " b++ " << b++ << " " << b << std::endl;
	std::cout << b << " b-- " << b-- << " " << b << std::endl;

	std::cout << "max "<< Fixed::ft_max( a, c ) << std::endl;
	std::cout << "min "<< Fixed::ft_min( a, c ) << std::endl;

	return 0;
}
