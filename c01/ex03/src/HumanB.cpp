#include"HumanB.hpp"

HumanB::HumanB(std::string name) : 
_name(name){}

HumanB::~HumanB(void){}

void	HumanB::attack(void)
{
	if(this->_weapon)
	{
		std::cout << this->_name << " attacks with their "
		<< (this->_weapon)->getType()
		<< std::endl;
	}
	else
	{
		std::cout << this->_name << " hast no weapon "
		<< std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}