/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:44:42 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/30 15:26:11 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../include/DiamondTrap.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"), ScavTrap("default"), FragTrap("default"), _name("default")
{
	std::cout << "DiamondTrap " << "Constructor for " << this->_name << " called" << std::endl;
	this->_hitPoints = FragTrap::default_hitPoints;
	this->_energyPoints = ScavTrap::default_energyPoints;
	this->_attackDamage = FragTrap::default_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +  "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) // <--- member/constructor initializer list - executed BEFORE constructor body is executed
{
	std::cout << "DiamondTrap " << "Constructor for " << this->_name << " called" << std::endl;
	this->_hitPoints = FragTrap::default_hitPoints;
	this->_energyPoints = ScavTrap::default_energyPoints;
	this->_attackDamage = FragTrap::default_attackDamage;
}

// all classes should be explicitly initialized in the COPY CONSTRUCTOR because SCAVTRAP and FRAGTRAG virtualy inherit CLAPTRAP
DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy)
{
	std::cout << "DiamondTrap " << "Copy constructor called" << std::endl;
	*this = cpy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& orig)
{
	std::cout << "DiamondTrap " << "Copy assignment operator called" << std::endl;
	if(this != &orig)
	{
		this->_name = orig._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << "Destructor called" << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap Name:	" << this->_name << std::endl;
	std::cout << "ClapTrap Name:		" << this->ClapTrap::_name << std::endl;
}
