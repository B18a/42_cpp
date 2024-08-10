#include"Weapon.hpp"


Weapon::Weapon(void){}
Weapon::~Weapon(void){}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

std::string const	&Weapon::getType(void) const
{
	return(this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}