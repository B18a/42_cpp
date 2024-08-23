/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:33:02 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:54:08 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Harl::Harl(void)
{
	// std::cout << "Harl Object created" << std::endl;
}

Harl::~Harl(void)
{
	// std::cout << "Harl Object destroyed" << std::endl;
}

/****************************************************/
/*			PUBLIC MEMBER FUNCTIONS					*/
/****************************************************/

void Harl::complain(std::string level)
{
	std::string complaint[LVL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < LVL)
	{
		if(complaint[i] == level)
		{
			execute_complaint(i);
			return ;
		}
		i++;
	}
	execute_complaint(5);
}

void Harl::execute_complaint(int level)
{
	switch (level)
	{
	case 0 :
		this->debug();
		break;
	case 1 :
		this->info();
		break;
	case 2 :
		this->warning();
		break;
	case 3 :
		this->error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

/****************************************************/
/*			PRIVATE MEMBER FUNCTIONS				*/
/****************************************************/

void Harl::debug(void)
{
	std::cout << "This is a DEBUG" << std::endl;
	this->info();
}

void Harl::info(void)
{
	std::cout << "This is a INFO" << std::endl;
	this->warning();
}

void Harl::warning(void)
{
	std::cout << "This is a WARNING" << std::endl;
	this->error();
}

void Harl::error(void)
{
	std::cout << "This is a ERROR" << std::endl;
}
