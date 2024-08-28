/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:58:57 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Zombie::Zombie(void)
{
	std::cout << "Zombie Object created" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie Object created" << this->name << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << this->name << " died ..." << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
