




#include"Zombie.hpp"
#include <iostream>


int main (void)
{
	std::cout << "---------Zombie on Stack---------" << std::endl;
		Zombie	zombie1("Frank");
		Zombie	zombie2("Herbert");
		Zombie	zombie3;

	std::cout << std::endl;
		randomChump("Kumar");

	std::cout << "---------Zombie on Heap START---------" << std::endl;
		Zombie	*heapZ = newZombie("HeapZ");

		delete (heapZ);
	std::cout << "---------Zombie on Heap END---------" << std::endl;

}

