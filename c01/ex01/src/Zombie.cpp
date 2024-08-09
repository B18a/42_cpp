
#include"Zombie.hpp"


Zombie::Zombie(void)
{
	this->name = "NOBODY";
	announce();
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
}
Zombie::~Zombie(void)
{
	std::cout<<this->name<<" died ..."<< std::endl;
}

void	Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<< std::endl;
}




