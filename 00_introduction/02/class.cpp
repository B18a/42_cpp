#include "class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructer called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructer called" << std::endl;
	return ;
}
