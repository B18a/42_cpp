






#include"Fixed.hpp"
#include <iostream>




int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}



// Pre and Postfix example from ChatGPT

// int main() {
//     int a = 5;
//     int b = 5;

//     // Prefix Increment
//     int prefixResult = ++a; // a is incremented first, then assigned to prefixResult

//     // Postfix Increment
//     int postfixResult = b++; // b is assigned to postfixResult first, then incremented

//     std::cout << "After prefix increment: " << std::endl;
//     std::cout << "a = " << a << std::endl; // a is now 6
//     std::cout << "prefixResult = " << prefixResult << std::endl; // prefixResult is 6

//     std::cout << "After postfix increment: " << std::endl;
//     std::cout << "b = " << b << std::endl; // b is now 6
//     std::cout << "postfixResult = " << postfixResult << std::endl; // postfixResult is 5

//     return 0;
// }
