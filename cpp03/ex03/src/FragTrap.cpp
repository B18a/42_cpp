/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:27:39 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/30 15:24:56 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/FragTrap.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

FragTrap::FragTrap(void) : ClapTrap("default")
{
	std::cout << "FragTrap " << "Constructor called" << std::endl;
	this->_hitPoints = default_hitPoints;
	this->_energyPoints = default_energyPoints;
	this->_attackDamage = default_attackDamage;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << "Constructor called" << std::endl;
	this->_hitPoints = default_hitPoints;
	this->_energyPoints = default_energyPoints;
	this->_attackDamage = default_attackDamage;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << "Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& orig) : ClapTrap(orig)
{
	std::cout << "FragTrap " << "Copy constructor called" << std::endl;
	*this = orig;
}

FragTrap& FragTrap::operator=(const FragTrap& orig)
{
	std::cout << "FragTrap " << "Copy assignment operator called" << std::endl;
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

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " gives a High Five to everyone" << std::endl;

}
