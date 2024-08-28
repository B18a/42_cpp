#include"../include/AMateria.hpp"


/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

AMateria::AMateria(){}

AMateria::~AMateria(){}

AMateria::AMateria (const AMateria& cpy)
{
	*this = cpy;
}

AMateria& AMateria::operator= (const AMateria& cpy)
{
	this->_type = cpy._type;
	return (*this);
}

AMateria::AMateria(std::string const& type) :_type(type)
{

}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

std::string const& AMateria::getType() const
{
	return(this->_type);
}
