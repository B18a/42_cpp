




#ifndef FIXED_HPP
 # define FIXED_HPP

#include<iostream>

class Fixed
{
	public:
	// default constructor
		Fixed(void);
	// copy constuctor
		Fixed(const Fixed& other);
	// copy assignment operator
		Fixed& operator=(const Fixed& other);
	// destructor
		~Fixed(void);

	// member functions
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	private:
		int					fixed_nbr;
		static const int	bits = 8;
};


#endif
