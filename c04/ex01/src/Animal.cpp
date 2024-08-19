/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasjehle <andreasjehle@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 14:16:54 by andreasjehl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Animal::Animal(void)
{
	std::cout << BLUE << "Animal " << "Constructor for " << "DEFAULT" << " called" << RESET << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << BLUE << "Animal " << "Constructor for " << this->type << " called" << RESET << std::endl;
}

Animal::Animal(const Animal& cpy)
{
	std::cout << BLUE << "Animal " << "Copy constructor called" << RESET << std::endl;
	*this = cpy;
}

Animal& Animal::operator=(const Animal& cpy)
{
	std::cout << BLUE << "Animal " << " copy assignment operator called" << RESET << std::endl;
	this->type = cpy.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << BLUE << "Animal " << "Destructor for " << this->type << " called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void	Animal::makeSound(void) const
{
	std::cout << YELLOW << "Animal makes sound" << RESET << std::endl;
}

std::string	Animal::getType(void) const
{
	return(this->type);
}
