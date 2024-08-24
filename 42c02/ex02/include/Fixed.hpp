/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 07:27:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/24 11:04:26 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  public:
	Fixed(void);
	Fixed(const int fpn);
	Fixed(const float fpn);
	~Fixed(void);
	Fixed(const Fixed& orig);
	Fixed& operator=(const Fixed& orig);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	/* comparison operators */
	bool	operator>(const Fixed& fixed) const;
	bool	operator<(const Fixed& fixed) const;
	bool	operator>=(const Fixed& fixed) const;
	bool	operator<=(const Fixed& fixed) const;
	bool	operator==(const Fixed& fixed) const;
	bool	operator!=(const Fixed& fixed) const;

	/* arithmetic operators */
	Fixed	operator+(const Fixed& fixed) const;
	Fixed	operator-(const Fixed& fixed) const;
	Fixed	operator*(const Fixed& fixed) const;
	Fixed	operator/(const Fixed& fixed) const;

	/* pre increment/decrement operators */
	// Fixed&	operator++(void);

  private:
	int					_fpn;
	static const int	_bits;
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif

// static members
// belong to the class itsself rather to a single object
// therefore they are shared across all objects of the class
// therefore no copy is needed in the copy constructor

// const members
// may only be defined once across the entire programm
// value cant be changed after initialization

// how to call the copy constructor
// Fixed obj1;
// Fixed obj2 = obj1;

// how to call the copy assignment operator
// Fixed obj1;
// Fixed obj2;
// obj1 = opj2;

