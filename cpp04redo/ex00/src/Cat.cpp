/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:58:57 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat " << "Constructor called" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	std::cout << "Cat " << "Copy constructor called" << std::endl;
	*this = cpy;
}

Cat& Cat::operator=(const Cat& cpy)
{
	std::cout << "Cat " << " copy assignment operator called" << std::endl;
	if(this != &cpy)
	{
		
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat " << "Destructor called" << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void Cat::makeSound() const
{
std::cout << BLUE << "Cat Class makes sound" << RESET << std::endl;}