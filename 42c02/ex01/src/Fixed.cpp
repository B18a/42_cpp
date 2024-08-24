/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 07:27:52 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/24 09:51:39 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <cmath>

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
Fixed::Fixed(const Fixed& orig)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fpn = orig.getRawBits();
}

/*	COPY ASSIGNMENT OPERATOR	*/
Fixed& Fixed::operator=(const Fixed& orig)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &orig)
		this->_fpn = orig.getRawBits();
	return (*this);
}

/****************************************************/
/*				CONSTRUCTORS EX01					*/
/****************************************************/

Fixed::Fixed(const int fpn)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpn = fpn << this->_bits;

}

Fixed::Fixed(const float fpn)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fpn = roundf(fpn * (1 << this->_bits));

}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return(this->_fpn);
}

void	Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fpn = raw;
}

/****************************************************/
/*				MEMBER FUNCTIONS EX01				*/
/****************************************************/

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fpn / (float)(1 << this->_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->getRawBits() >> this->_bits);
}

/****************************************************/
/*				Operator Overload					*/
/****************************************************/

std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
	return (output << fixed.toFloat());
}
