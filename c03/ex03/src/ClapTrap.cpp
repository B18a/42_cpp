/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 21:39:05 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTORS

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap " << "Constructor for " << "DEFAULT" << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :_name(name), _health(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap " << "Constructor for " << this->_name << " called" << std::endl;
}

// copy constuctor
ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "ClapTrap " << "Copy constructor called" << std::endl;
	*this = cpy;
}

// copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
	std::cout << "ClapTrap " << "Copy assignment constructor called" << std::endl;
	this->_name = cpy._name;
	this->_health = cpy._health;
	this->_energy = cpy._energy;
	this->_damage = cpy._damage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << "Destructor for " << this->_name << " called" << std::endl;
}


// MEMBER FUNCTIONS

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->_name
	<< " attacks " << target << ", causing "
	<< this->_damage << " points of damage!"
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_energy -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_energy += amount;
}
