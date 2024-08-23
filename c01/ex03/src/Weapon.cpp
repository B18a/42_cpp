/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/22 12:05:23 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Weapon::Weapon(void)
{
	// std::cout << "Weapon Object created " << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->setType(type);
	// std::cout << "Weapon Object created " << this->type << std::endl;
}

Weapon::~Weapon(void)
{
	// std::cout << "Weapon Object destroyed " << this->type << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

// const in return type -> caller of function cannot modify value
// const in member funciton -> function cannot modify value

const std::string& Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
