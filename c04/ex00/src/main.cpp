




#include"../include/Colors.hpp"
#include"../include/Animal.hpp"
#include"../include/Dog.hpp"
#include"../include/Cat.hpp"



#include <iostream>

int main( void )
{

const Animal* meta = new Animal();
const Animal* snoopy = new Dog();
const Animal* garfield = new Cat();
std::cout << BG_WHITE << " CODE BELOW " << RESET << std::endl << std::endl;
std::cout << snoopy->getType() << " " << std::endl;
std::cout << garfield->getType() << " " << std::endl;
garfield->makeSound(); //will output the cat sound!
snoopy->makeSound();
meta->makeSound();
std::cout << std::endl << BG_WHITE << " CODE ABOVE " << RESET << std::endl;
delete garfield;
delete snoopy;
delete meta;
return 0;
}
