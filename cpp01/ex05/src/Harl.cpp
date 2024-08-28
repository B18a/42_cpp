/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:33:02 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:33:07 by ajehle           ###   ########.fr       */
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

// the THIS pointer in "(this->*funcPTR[i])()" is necessary to tell the compiler which instance of the class should be operated on
// without the brackets in "(this->*funcPTR[i])()" the compiler would interpret it like this "(this->*(funcPTR[i]()))" which is wrong

void Harl::complain(std::string level)
{
	void (Harl::*funcPTR[LVL])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complaint[LVL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < LVL)
	{
		if(complaint[i] == level)
		{
			(this->*funcPTR[i])();
			return;
		}
		i++;
	}
}

/****************************************************/
/*			PRIVATE MEMBER FUNCTIONS				*/
/****************************************************/

void Harl::debug(void)
{
	std::cout << "This is a DEBUG" << std::endl;
}

void Harl::info(void)
{
	std::cout << "This is a INFO" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "This is a WARNING" << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is a ERROR" << std::endl;
}
