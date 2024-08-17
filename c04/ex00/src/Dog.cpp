/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 11:04:05 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << GREEN << "Constructor for " << this->Animal::type << " called" << RESET << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = cpy;
}

Dog &Dog::operator=(const Dog &cpy)
{
	std::cout << GREEN << "Copy assignment constructor called" << RESET << std::endl;
	this->type = cpy.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << GREEN << "Destructor for " << this->type << " called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void	Dog::makeSound(void) const
{
	std::cout << MAGENTA << "DOG: " << "Wuff" << RESET << std::endl;
}
