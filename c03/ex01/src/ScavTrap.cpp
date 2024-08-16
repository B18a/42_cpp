/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 20:45:47 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// CONSTRUCTORS

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << "Constructor for " << this->_name << " called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
}

// copy constuctor
ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
	std::cout << "ScavTrap " << "Copy constructor called" << std::endl;
	this->_health = cpy._health;
	this->_energy = cpy._energy;
	this->_damage = cpy._damage;
}

// copy assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
{
	std::cout << "ScavTrap " << "Copy assignment constructor called" << std::endl;
	this->_name = cpy._name;
	this->_health = cpy._health;
	this->_energy = cpy._energy;
	this->_damage = cpy._damage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << "Destructor for " << this->_name << " called" << std::endl;
}

// MEMBER FUNCTIONS

void guardGate(void)
{
	std::cout << "ScavTrap "<< "" << "is now in Gatekeeper mode" << std::endl;
}
