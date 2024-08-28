/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:02:09 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	// std::cout << "HumanA Object created " << this->_name << std::endl;
}

HumanA::~HumanA(void)
{
	// std::cout << "HumanA Object destroyed " << this->_name << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void	HumanA::attack()
{
	std::cout << this->_name
		<< " attacks with their "
		<< this->_weapon.getType()
		<< std::endl;
}
