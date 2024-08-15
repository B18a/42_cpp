



#include"Fixed.hpp"



Fixed::Fixed(void) : _fixed_nbr(0)
{
	// std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& cpy)
{
	// std::cout<<"Copy constructor called"<<std::endl;
	*this = cpy;
}

Fixed& Fixed::operator=(const Fixed& cpy)
{
	// std::cout<<"Copy assignment operator called"<<std::endl;
	if(this != &cpy)
		this->_fixed_nbr = cpy.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	// std::cout<<"Destructor called"<<std::endl;
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
	// std::cout<<"Int constructor called"<<std::endl;
	this->_fixed_nbr = nbr << this->_bits;
}

Fixed::Fixed(const float nbr)
{
	// std::cout<<"Float constructor called"<<std::endl;
	this->_fixed_nbr = roundf(nbr * (1 << this->_bits));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixed_nbr / (float)(1 << this->_bits));
}

int Fixed::toInt( void ) const
{
	int nbr;
	nbr = this->getRawBits() >> this->_bits;

	return nbr;
}

std::ostream &operator<<(std::ostream &output, const Fixed &nbr)
{
	output << nbr.toFloat();
	return output;
}


/**********EX02**********/

// comparison operators
bool Fixed::operator>(const Fixed& cpy)
{
	if(this->toFloat() > cpy.toFloat())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& cpy)
{
	if(this->toFloat() < cpy.toFloat())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& cpy)
{
	if(this->toFloat() >= cpy.toFloat())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& cpy)
{
	if(this->toFloat() <= cpy.toFloat())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& cpy)
{
	if(this->toFloat() == cpy.toFloat())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& cpy)
{
	if(this->toFloat() != cpy.toFloat())
		return true;
	return false;
}

// arithmetic operators
Fixed Fixed::operator+(const Fixed& cpy)
{
	return (Fixed(this->toFloat() + cpy.toFloat()));
}

Fixed Fixed::operator-(const Fixed& cpy)
{
	return (Fixed(this->toFloat() - cpy.toFloat()));
}

Fixed Fixed::operator*(const Fixed& cpy)
{
	return (Fixed(this->toFloat() * cpy.toFloat()));
}

Fixed Fixed::operator/(const Fixed& cpy)
{
	return (Fixed(this->toFloat() / cpy.toFloat()));
}

// Pre-increment (++x) returns a reference because the incremented object itself is returned.
// pre increment - decrement
Fixed &Fixed::operator++(void)
{
	this->_fixed_nbr++;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->_fixed_nbr--;
	return (*this);
}

// pos increment - decrement
// Post-increment (x++) returns a copy because the object before it was incremented is returned
Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->operator++();
	return(temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->operator--();
	return(temp);
}


// min - max
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if(a < b)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if(a > b)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if(a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if(a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

