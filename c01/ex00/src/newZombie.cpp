#include"Zombie.hpp"

// Zombie *Zombie::newZombie( std::string name )
// {
// 	Zombie	*person;

// 	person = new Zombie;
// 	person->name = name;
// 	person->announce();
// 	return person;

// }


Zombie* newZombie( std::string name )
{	
	return (new Zombie(name));
}
