




#ifndef FIXED_HPP
 # define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed& cpy);
		~Fixed(void);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed& operator=(const Fixed& cpy);

		// comparison operators
		bool operator>(const Fixed& cpy);
		bool operator<(const Fixed& cpy);
		bool operator>=(const Fixed& cpy);
		bool operator<=(const Fixed& cpy);
		bool operator==(const Fixed& cpy);
		bool operator!=(const Fixed& cpy);

		// arithmetic operators
		Fixed operator+(const Fixed& cpy);
		Fixed operator-(const Fixed& cpy);
		Fixed operator*(const Fixed& cpy);
		Fixed operator/(const Fixed& cpy);

		// Pre-increment (++x) returns a reference because the incremented object itself is returned.
		// pre increment - decrement
		Fixed &operator++(void);
		Fixed &operator--(void);

		// pos increment - decrement
		// Post-increment (x++) returns a copy because the object before it was incremented is returned
		Fixed operator++(int);
		Fixed operator--(int);

		// min - max
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);


	private:
		int					_fixed_nbr;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &output, const Fixed &nbr);

#endif
