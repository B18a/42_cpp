/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 10:47:04 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"
#include"../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap " << "Constructor for " << "DEFAULT" << " called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :	// <--- member/constructor initializer list - executed BEFORE constructor body is executed
	ClapTrap(name +  "_clap_name"),
	ScavTrap(name),
	FragTrap(name),
	_name(name)
{
	std::cout << "DiamondTrap " << "Constructor for " << this->_name << " called" << std::endl;
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;

}

// all classes should be explicitly initialized in the COPY CONSTRUCTOR because SCAVTRAP and FRAGTRAG virtualy inherit CLAPTRAP
DiamondTrap::DiamondTrap(const DiamondTrap &cpy) :
	ClapTrap(cpy),
	ScavTrap(cpy),
	FragTrap(cpy)
{
	std::cout << "DiamondTrap " << "Copy constructor called" << std::endl;
	*this = cpy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cpy)
{
	std::cout << "DiamondTrap " << " copy assignment operator called" << std::endl;
	this->_name = cpy._name;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << "Destructor for " << this->_name << " called" << std::endl;
}


/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void DiamondTrap::whoAmI(void)
{
	std::cout << CYAN << "DiamondTrap Name:	" << this->_name << RESET << std::endl;
	std::cout << CYAN <<"ClapTrap Name:		" << this->ClapTrap::_name << RESET << std::endl;
}


