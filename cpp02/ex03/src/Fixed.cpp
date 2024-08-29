/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 07:27:52 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/28 18:42:03 by ajehle           ###   ########.fr       */
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
	// std::cout << "Default constructor called" << std::endl;
}

/*	DEFAULT DESTRUCTOR	*/
Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

/*	COPY CONTRUCTOR	*/
Fixed::Fixed(const Fixed& orig)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_fpn = orig.getRawBits();
}

/*	COPY ASSIGNMENT OPERATOR	*/
Fixed& Fixed::operator=(const Fixed& orig)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if(this != &orig)
		this->_fpn = orig.getRawBits();
	return (*this);
}

/****************************************************/
/*				CONSTRUCTORS EX01					*/
/****************************************************/

Fixed::Fixed(const int fpn)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fpn = fpn << this->_bits;

}

Fixed::Fixed(const float fpn)
{
	// std::cout << "Float constructor called" << std::endl;
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

/****************************************************/
/*		Operator Overload Member Functions			*/
/****************************************************/
/****************************************************/
/*				Comparision Operator				*/
/****************************************************/

	bool	Fixed::operator>(const Fixed& fixed) const
	{
		return(this->toFloat() > fixed.toFloat());
	}

	bool	Fixed::operator<(const Fixed& fixed) const
	{
		return(this->toFloat() < fixed.toFloat());
	}

	bool	Fixed::operator>=(const Fixed& fixed) const
	{
		return(this->toFloat() >= fixed.toFloat());
	}

	bool	Fixed::operator<=(const Fixed& fixed) const
	{
		return(this->toFloat() <= fixed.toFloat());
	}

	bool	Fixed::operator==(const Fixed& fixed) const
	{
		return(this->toFloat() == fixed.toFloat());
	}

	bool	Fixed::operator!=(const Fixed& fixed) const
	{
		return(this->toFloat() != fixed.toFloat());
	}

/****************************************************/
/*				Arithmetic Operator					*/
/****************************************************/

	Fixed	Fixed::operator+(const Fixed& fixed) const
	{
		return (Fixed(this->toFloat() + fixed.toFloat()));
	}

	Fixed	Fixed::operator-(const Fixed& fixed) const
	{
		return (Fixed(this->toFloat() - fixed.toFloat()));
	}

	Fixed	Fixed::operator*(const Fixed& fixed) const
	{
		return (Fixed(this->toFloat() * fixed.toFloat()));
	}

	Fixed	Fixed::operator/(const Fixed& fixed) const
	{
		return (Fixed(this->toFloat() / fixed.toFloat()));
	}

/****************************************************/
/*		Pre Increment/Decrement Operator			*/
/****************************************************/

Fixed&	Fixed::operator++(void)
{
	this->_fpn++;
	return(*this);
}

Fixed&	Fixed::operator--(void)
{
	this->_fpn--;
	return(*this);
}

/****************************************************/
/*		Post Increment/Decrement Operator			*/
/****************************************************/
// (*this) = getting the reference of the current object
// (int) parameter is a dummy parameter that differentiates the postfix version from the prefix version
// Postfix (operator++(int)): Returns the original value before incrementing.
// Postfix: Returns by value, meaning it creates and returns a copy of the object before it was incremented.

Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;
	++(*this);
	return(temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;
	--(*this);
	return(temp);
}

/****************************************************/
/*		Public Overloaded Member Functions			*/
/****************************************************/
// Prefix (operator++()): Returns the value after incrementing.
// Prefix: Returns by reference, meaning it returns the actual object after it has been incremented.

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if(a < b)
		return(a);
	else
		return(b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if(a > b)
		return(a);
	else
		return(b);
}

const Fixed& Fixed::min(const Fixed& a,const  Fixed& b)
{
	if(a < b)
		return(a);
	else
		return(b);
}

const Fixed& Fixed::max(const Fixed& a,const  Fixed& b)
{
	if(a > b)
		return(a);
	else
		return(b);
}
