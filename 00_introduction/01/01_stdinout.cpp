#include <iostream>

int	main(void)
{
	char	buff[2];

	std::cout << "HELLO WORLD !" << std::endl;
	std::cout << "Login:	";
	std::cin.get(buff, sizeof(buff)); // Safe input handling

	// std::cin >> buff;	//BUFFER OVERFLOW if string is to long!
	std::cout << "Your Login:[" << buff << "]" << std::endl;
}
