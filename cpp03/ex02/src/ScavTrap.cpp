/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:27:39 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/30 15:24:07 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ScavTrap.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

ScavTrap::ScavTrap(void) : ClapTrap("default")
{
	std::cout << "ScavTrap " << "Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << "Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << "Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& orig) : ClapTrap(orig)
{
	std::cout << "ScavTrap " << "Copy constructor called" << std::endl;
	*this = orig;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& orig)
{
	std::cout << "ScavTrap " << "Copy assignment operator called" << std::endl;
	if(this != &orig)
	{
		this->_name = orig._name;
		this->_hitPoints = orig._hitPoints;
		this->_energyPoints = orig._energyPoints;
		this->_attackDamage = orig._attackDamage;
	}
	return (*this);
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void ScavTrap::attack(const std::string& target)
{
	if(this->_energyPoints && this->_hitPoints)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " with " << this->_attackDamage << " points" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is in Gate Keeper Mode" << std::endl;

}
