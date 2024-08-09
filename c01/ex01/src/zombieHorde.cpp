#include"Zombie.hpp"
#include <string>

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
	return NULL;

    Zombie* Horde = new Zombie[N]; // Allocate array on the heap

    int i = 0;
    while (i < N)
    {
        Horde[i] = Zombie(name + std::to_string(i)); // Create a Zombie object
        i++;
    }

    return Horde;
}

	// Zombie Horde[N];
	// int i = 0;
	// if(N > 0)
	// {
	// 	while( i < N)
	// 	{
	// 		Horde[i] = new(Zombie(name))
	// 		i++;
	// 	}
	// 	return Horde;
	// }
	// return NULL;
	// }


// Zombie *Zombie::newZombie( std::string name )
// {
// 	Zombie	*person;

// 	person = new Zombie;
// 	person->name = name;
// 	person->announce();
// 	return person;

// }
