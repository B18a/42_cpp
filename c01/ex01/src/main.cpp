




#include"Zombie.hpp"
#include <iostream>


int main (void)
{
	Zombie	*heapZ = zombieHorde(5,"Horde");


	delete[] heapZ;
}

