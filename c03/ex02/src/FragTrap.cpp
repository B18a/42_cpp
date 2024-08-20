/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 21:38:21 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// CONSTRUCTORS

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap " << "Constructor for " << "DEFAULT" << " called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << "Constructor for " << this->_name << " called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
}

// copy constuctor
FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
	std::cout << "FragTrap " << "Copy constructor called" << std::endl;
	this->_health = cpy._health;
	this->_energy = cpy._energy;
	this->_damage = cpy._damage;
}

// copy assignment operator
FragTrap &FragTrap::operator=(const FragTrap &cpy)
{
	std::cout << "FragTrap " << " copy assignment operator called" << std::endl;
	this->_name = cpy._name;
	this->_health = cpy._health;
	this->_energy = cpy._energy;
	this->_damage = cpy._damage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << "Destructor for " << this->_name << " called" << std::endl;
}

// MEMBER FUNCTIONS

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " gives a HIGH FIVE to everyone in the room" << std::endl;
}
