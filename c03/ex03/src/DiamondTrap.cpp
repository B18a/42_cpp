/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 22:15:37 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// CONSTRUCTORS

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap " << "Constructor for " << "DEFAULT" << " called" << std::endl;
}

// DiamondTrap::DiamondTrap(std::string name) : _name(name), ClapTrap(name + "_clap_name")
DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	std::cout << "DiamondTrap " << "Constructor for " << this->_name << " called" << std::endl;
}

// copy constuctor
// all classes should be explicitly initialized in the copy constructor because SCAVTRAP and FRAGTRAG virtualy inherit CLAPTRAP
DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy)
{
	std::cout << "DiamondTrap " << "Copy constructor called" << std::endl;
	*this = cpy;
}

// copy assignment operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cpy)
{
	std::cout << "DiamondTrap " << "Copy assignment constructor called" << std::endl;
	this->_name = cpy._name;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << "Destructor for " << this->_name << " called" << std::endl;
}


// MEMBER FUNCTIONS
