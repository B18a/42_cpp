/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:58:57 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat " << "Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat " << "Copy constructor called" << std::endl;
	*this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	std::cout << "WrongCat " << " copy assignment operator called" << std::endl;
	if(this != &cpy)
	{
		
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat " << "Destructor called" << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void WrongCat::makeSound() const
{
	std::cout << RED << "WrongCat Class makes sound" << RESET << std::endl;
}