



#include"Fixed.hpp"


/*************EX00**********************/

// default constructor
Fixed::Fixed(void) : _fixed_nbr(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

// copy constuctor
Fixed::Fixed(const Fixed& cpy)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = cpy;
}

// copy assignment operator
Fixed& Fixed::operator=(const Fixed& cpy)
{
	std::cout<<" copy assignment operator called"<<std::endl;
	if(this != &cpy)
		this->_fixed_nbr = cpy.getRawBits();
	return *this;
}

// destructor
Fixed::~Fixed(void)
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const
{
	// std::cout<<"getRawBits member function called"<<std::endl;
	return(this->_fixed_nbr);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout<<"setRawBits member function called"<<std::endl;
	this->_fixed_nbr = raw;
}
