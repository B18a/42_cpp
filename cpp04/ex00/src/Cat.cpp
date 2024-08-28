/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 11:04:05 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << ORANGE << "Cat " << "Constructor for " << this->Animal::type << " called" << RESET << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	std::cout << ORANGE << "Cat " << "Copy constructor called" << RESET << std::endl;
	*this = cpy;
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << ORANGE << "Cat " << " copy assignment operator called" << RESET << std::endl;
	this->type = cpy.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << ORANGE << "Cat " << "Destructor for " << this->type << " called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void	Cat::makeSound(void) const
{
	std::cout << RED << "CAT: " << "Miauuuuu" << RESET << std::endl;
}
