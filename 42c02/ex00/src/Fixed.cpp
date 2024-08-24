/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 07:27:52 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/24 09:49:00 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/****************************************************/
/*				CONST DEFINITION					*/
/****************************************************/
// pre init for older than c++17 can be initialized in the class itsself
const int Fixed::_bits = 8;

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

/*	DEFAULT CONSTRUCTOR	*/
Fixed::Fixed(void) : _fpn(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*	DEFAULT DESTRUCTOR	*/
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*	COPY CONTRUCTOR	*/
//  Fixed::Fixed(const Fixed& orig) : _fpn(orig._fpn)
Fixed::Fixed(const Fixed& orig)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fpn = orig.getRawBits();
}
// the version below would work in this case, but is not ideal because no deep copy of the variables are made
// instead a reference is returned !
// Fixed::Fixed(const Fixed& orig)
// {
// 	std::cout << "Copy constructor called" << std::endl;
// 	*this = orig;
// }

/*	COPY ASSIGNMENT OPERATOR	*/
Fixed& Fixed::operator=(const Fixed& orig)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &orig)	// Self assignment protection - no data gets harmed
		this->_fpn = orig.getRawBits();
	return (*this);
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fpn);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpn = raw;
}
