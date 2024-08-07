#include"Contact.hpp"
#include"PhoneBook.hpp"
#include <iostream>

#include <unistd.h>
#include <chrono> //time
#include <thread>

// using namespace std;


int main (void)
{
	std::string input;

	while(1)
	{
		std::cout<<"Enter a Command : [SEARCH] [ADD] [EXIT]" << std::endl;

		std::getline(std::cin, input);





    	std::this_thread::sleep_for(std::chrono::microseconds(1000000)); // sleep for 1,000,000 microseconds (1 second)
	}
}
