




#include"../include/Colors.hpp"
#include"../include/Animal.hpp"
#include"../include/Dog.hpp"
#include"../include/Cat.hpp"



#include <iostream>

int main( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	delete i;
	delete j;//should not create a leak
}
