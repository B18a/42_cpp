




#ifndef FIXED_HPP
 # define FIXED_HPP

#include<iostream>

class Fixed
{
	public:
	// default constructor
		Fixed(void);
	// copy constuctor
		Fixed(const Fixed& cpy);
	// copy assignment operator
		Fixed& operator=(const Fixed& cpy);
	// destructor
		~Fixed(void);

	// member functions
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	private:
		int					_fixed_nbr;
		static const int	_bits = 8;
};


#endif
