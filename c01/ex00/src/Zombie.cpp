/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/22 11:16:13 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Zombie::Zombie(void)
{
	this->name = "NOBODY";
	announce();
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
}
Zombie::~Zombie(void)
{
	std::cout << this->name << ": died ..." << std::endl;
}

/****************************************************/
/*			PUBLIC MEMBER FUNCTIONS					*/
/****************************************************/

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
