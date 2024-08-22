




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

		Fixed&	operator=(const Fixed& cpy);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_fixed_nbr;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &output, const Fixed &nbr);

#endif
