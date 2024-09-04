/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:27:39 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 18:16:41 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ClapTrap.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& orig)
{
	std::cout << "ClapTrap " << "Copy constructor called" << std::endl;
	*this = orig;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& orig)
{
	std::cout << "ClapTrap " << "Copy assignment operator called" << std::endl;
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

void ClapTrap::attack(const std::string& target)
{
	if(this->_energyPoints && this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " with " << this->_attackDamage << " points" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage " << std::endl;
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energyPoints && this->_hitPoints)
	{
		if(amount > UINT_MAX - this->_hitPoints)
			this->_hitPoints = UINT_MAX;
		else
			this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " repairs itsself with " << amount << " points" << std::endl;
	}
}

void ClapTrap::printStatus(void)
{
	std::cout	<< "name :		" << this->_name
				<< "\nhitPoints :	" << this->_hitPoints
				<< "\nenergyPoints :	" << this->_energyPoints
				<< "\nattackDamage :	" << this->_attackDamage
				<< std::endl;
}
