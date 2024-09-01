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

Cat::Cat(void) : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat " << "Constructor called" << std::endl;
	//this->brain = new Brain();
}

Cat::Cat(const Cat& cpy) : Animal(cpy), brain(new Brain(*cpy.brain))
{
	std::cout << "Cat " << "Copy constructor called" << std::endl;
	//this->brain = new Brain(*cpy.brain);
}

Cat& Cat::operator=(const Cat& cpy)
{
	std::cout << "Cat" << " copy assignment operator called" << std::endl;
	if(this != &cpy)
	{
        Animal::operator=(cpy); // Assign base class part
        delete brain; // Clean up existing Brain
        brain = new Brain(*cpy.brain); // Deep copy Brain
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat " << "Destructor called" << std::endl;
	delete this->brain;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void Cat::makeSound() const
{
std::cout << BLUE << "Cat Class makes sound" << RESET << std::endl;}