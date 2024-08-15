



#include"Fixed.hpp"



// default constructor
Fixed::Fixed(void) : fixed_nbr(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

// copy constuctor
Fixed::Fixed(const Fixed& other) : fixed_nbr(other.fixed_nbr)
{
	std::cout<<"Copy constructor called"<<std::endl;
}

// copy assignment operator
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout<<"Copy assignment constructor called"<<std::endl;
	if(this != &other)
		this->fixed_nbr = other.fixed_nbr;
	return *this;
}

// destructor
Fixed::~Fixed(void)
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return(this->fixed_nbr);
}

void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->fixed_nbr = raw;
}
