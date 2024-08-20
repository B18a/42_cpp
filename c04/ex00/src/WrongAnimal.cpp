/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 12:44:38 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

WrongAnimal::WrongAnimal(void)
{
	std::cout << BLUE << "WrongAnimal " << "Constructor for " << "DEFAULT" << " called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << BLUE << "WrongAnimal " << "Constructor for " << this->type << " called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << BLUE << "WrongAnimal " << "Copy constructor called" << RESET << std::endl;
	*this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
	std::cout << BLUE << "WrongAnimal " << " copy assignment operator called" << RESET << std::endl;
	this->type = cpy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << BLUE << "WrongAnimal " << "Destructor for " << this->type << " called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void	WrongAnimal::makeSound(void) const
{
	std::cout << YELLOW << "WrongAnimal makes sound" << RESET << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return(this->type);
}
