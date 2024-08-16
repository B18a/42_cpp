




#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include"DiamondTrap.hpp"

#include <iostream>

int main( void )
{
	// ClapTrap batman("Batman");
	// ScavTrap superman("Superman");
	// FragTrap joker("Joker");
	DiamondTrap harley("HarleyQuinn");

	// joker.highFivesGuys();

	harley.ScavTrap::attack("Joker");

	return 0;
}
