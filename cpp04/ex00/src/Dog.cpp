/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:58:57 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog " << "Constructor called" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
	std::cout << "Dog " << "Copy constructor called" << std::endl;
	*this = cpy;
}

Dog& Dog::operator=(const Dog& cpy)
{
	std::cout << "Dog " << " copy assignment operator called" << std::endl;
	if(this != &cpy)
	{
		
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog " << "Destructor called" << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void Dog::makeSound() const
{
std::cout << YELLOW << "Dog Class makes sound" << RESET << std::endl;}