/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 07:27:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/24 09:48:49 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed& orig);
	Fixed& operator=(const Fixed& orig);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
  private:
	int					_fpn;
	static const int	_bits;
};

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

