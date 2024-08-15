#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
_name(name), _weapon(weapon){}

// does not work like that beacuse references must be initialized at declaration
// HumanA::HumanA(std::string name, Weapon &weapon)
// {
// 	this->_weapon = weapon;
// 	this->_name = name;
// }

HumanA::~HumanA(void)
{

}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
