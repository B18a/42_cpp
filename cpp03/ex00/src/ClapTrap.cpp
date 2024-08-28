/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 19:49:21 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTORS

ClapTrap::ClapTrap(std::string name) :_name(name), _health(10), _energy(10), _damage(0)
{
	std::cout << "Constructor for " << this->_name << " called" << std::endl;
}

// copy constuctor
ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

// copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
	std::cout << " copy assignment operator called" << std::endl;
	this->_name = cpy._name;
	this->_health = cpy._health;
	this->_energy = cpy._energy;
	this->_damage = cpy._damage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor for " << this->_name << " called" << std::endl;
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
