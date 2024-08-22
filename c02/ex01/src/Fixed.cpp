



#include"Fixed.hpp"



Fixed::Fixed(void) : _fixed_nbr(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& cpy)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = cpy;
}

Fixed& Fixed::operator=(const Fixed& cpy)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if(this != &cpy)
		this->_fixed_nbr = cpy.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const
{
	return(this->_fixed_nbr);
}

void Fixed::setRawBits( int const raw )
{
	this->_fixed_nbr = raw;
}

Fixed::Fixed(const int nbr)
{
	std::cout<<"Int constructor called"<<std::endl;
	this->_fixed_nbr = nbr << this->_bits;
}

Fixed::Fixed(const float nbr)
{
	std::cout<<"Float constructor called"<<std::endl;
	this->_fixed_nbr = roundf(nbr * (1 << this->_bits));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixed_nbr / (float)(1 << this->_bits));
}

int Fixed::toInt( void ) const
{
	return (this->getRawBits() >> this->_bits);
}

std::ostream &operator<<(std::ostream &output, const Fixed &nbr)
{
	return (output << nbr.toFloat());
}
