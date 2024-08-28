




#include"../include/ClapTrap.hpp"
#include"../include/ScavTrap.hpp"
#include"../include/FragTrap.hpp"
#include"../include/DiamondTrap.hpp"
#include"../include/Colors.hpp"


#include <iostream>

int main( void )
{
	// ClapTrap batman("Batman");
	// ScavTrap superman("Superman");
	// FragTrap joker("Joker");
	DiamondTrap harley("HarleyQuinn");

	// joker.highFivesGuys();

	harley.ScavTrap::attack("Joker");
	harley.whoAmI();

	return 0;
}
