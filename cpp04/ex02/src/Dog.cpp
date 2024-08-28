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

Dog::Dog(void) : Aanimal("Dog")
{
	std::cout << GREEN << "Dog " << "Constructor for " << this->Aanimal::type << " called" << RESET << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& cpy) : Aanimal(cpy)
{
	std::cout << GREEN << "Dog " << "Copy constructor called" << RESET << std::endl;
	*this = cpy;
}

Dog& Dog::operator=(const Dog& cpy)
{
	std::cout << GREEN << "Dog " << " copy assignment operator called" << RESET << std::endl;
	this->type = cpy.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << GREEN << "Dog " << "Destructor for " << this->type << " called" << RESET << std::endl;
	delete this->brain;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void	Dog::makeSound(void) const
{
	std::cout << MAGENTA << "DOG: " << "Wuff" << RESET << std::endl;
}
