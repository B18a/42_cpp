/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:01:38 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	// std::cout << "HumanB Object created " << this->_name << std::endl;
}

HumanB::~HumanB(void)
{
	// std::cout << "HumanB Object destroyed " << this->_name << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void	HumanB::attack()
{
	if(this->_weapon)
	{
		std::cout << this->_name
			<< " attacks with their "
			<< this->_weapon->getType()
			<< std::endl;
	}
	else
	{
		std::cout << this->_name
			<< " attacks with their "
			<< "fists"
			<< std::endl;
	}
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
