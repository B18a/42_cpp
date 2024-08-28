/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasjehle <andreasjehle@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 14:16:54 by andreasjehl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Aanimal.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Aanimal::Aanimal(void)
{
	std::cout << BLUE << "Aanimal " << "Constructor for " << "DEFAULT" << " called" << RESET << std::endl;
}

Aanimal::Aanimal(std::string type) : type(type)
{
	std::cout << BLUE << "Aanimal " << "Constructor for " << this->type << " called" << RESET << std::endl;
}

Aanimal::Aanimal(const Aanimal& cpy)
{
	std::cout << BLUE << "Aanimal " << "Copy constructor called" << RESET << std::endl;
	*this = cpy;
}

Aanimal& Aanimal::operator=(const Aanimal& cpy)
{
	std::cout << BLUE << "Aanimal " << " copy assignment operator called" << RESET << std::endl;
	this->type = cpy.type;
	return (*this);
}

Aanimal::~Aanimal(void)
{
	std::cout << BLUE << "Aanimal " << "Destructor for " << this->type << " called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void	Aanimal::makeSound(void) const
{
	std::cout << YELLOW << "Aanimal makes sound" << RESET << std::endl;
}

std::string	Aanimal::getType(void) const
{
	return(this->type);
}
