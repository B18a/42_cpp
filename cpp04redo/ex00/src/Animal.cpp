/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:58:57 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Animal::Animal(void) : type("default")
{
	std::cout << "Animal " << "Constructor for " << "DEFAULT" << " called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal " << "Constructor for " << type << " called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal " << "Copy constructor called" << std::endl;
	*this = cpy;
}

Animal &Animal::operator=(const Animal &cpy)
{
	std::cout << "Animal " << " copy assignment operator called" << std::endl;
	if(this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal " << "Destructor for " << type << " called" << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void Animal::makeSound() const
{
std::cout << CYAN << "ANIMAL Class makes sound" << RESET << std::endl;}