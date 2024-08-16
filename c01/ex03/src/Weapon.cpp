/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:55:48 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 13:55:56 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}
Weapon::~Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

std::string const &Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
