/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 11:04:05 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << ORANGE << "Constructor for " << this->WrongAnimal::type << " called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
{
	std::cout << ORANGE << "Copy constructor called" << RESET << std::endl;
	*this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	std::cout << ORANGE << "Copy assignment constructor called" << RESET << std::endl;
	this->type = cpy.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << ORANGE << "Destructor for " << this->type << " called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void	WrongCat::makeSound(void) const
{
	std::cout << RED << "WrongCat: " << "Wrong Miauuuuu" << RESET << std::endl;
}
